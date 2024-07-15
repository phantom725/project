#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>
#include <climits>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include<QDebug>

struct Edge {
    int dest;
    int weight;
};

struct Vertex {
    Vertex(){}
    Vertex(const std::string& n):name(n){}
    std::string name;
    std::vector<Edge> edges;
};

class Graph {
public:
    Graph(int n) : vertices(n) {}

    void addVertex(int id, const std::string& name) {
        if(id>=vertices.size()) vertices.push_back(Vertex(name));
        else{
            vertices[id].name = name;
            nameToId[name] = id;
        }
        qDebug() << (int)vertices.size();
    }

    void addEdge(int src, int dest,int weight) {
        vertices[src].edges.push_back({dest, weight});
        vertices[dest].edges.push_back({src, weight});
    }

    void removeEdge(int src, int dest) {
        auto &srcEdges = vertices[src].edges;
        srcEdges.erase(std::remove_if(srcEdges.begin(), srcEdges.end(), [dest](const Edge &edge) {
                           return edge.dest == dest;
                       }), srcEdges.end());

        auto &destEdges = vertices[dest].edges;
        destEdges.erase(std::remove_if(destEdges.begin(), destEdges.end(), [src](const Edge &edge) {
                            return edge.dest == src;
                        }), destEdges.end());
    }
    void restoreEdge(int src, int dest) {
        vertices[src].edges.push_back({dest, 500});
        vertices[dest].edges.push_back({src, 500});
    }



    std::string getVertexInfo(int id) const {
        if (id >= 0 && id < vertices.size()) {
            return vertices[id].name;
        }
        return "景点不存在";
    }

    std::vector<int> dijkstra(int src) const {
        int n = vertices.size();
        std::vector<int> dist(n, INT_MAX);
        std::vector<int> prev(n, -1);
        dist[src] = 0;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (const auto& edge : vertices[u].edges) {
                int v = edge.dest;
                int weight = edge.weight;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    prev[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        return prev;
    }

    std::vector<std::vector<int>> floydWarshall() const {
        int n = vertices.size();
        std::vector<std::vector<int>> dist(n, std::vector<int>(n, INT_MAX));
        std::vector<std::vector<int>> next(n, std::vector<int>(n, -1));

        for (int i = 0; i < n; ++i) {
            dist[i][i] = 0;
            for (const auto& edge : vertices[i].edges) {
                dist[i][edge.dest] = edge.weight;
                next[i][edge.dest] = edge.dest;
            }
        }

        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                        dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }

        return next;
    }

    std::vector<int> getShortestPathByName(const std::string& start, const std::string& end) const {
        int startId = getVertexIdByName(start);
        int endId = getVertexIdByName(end);

        if (startId == -1 || endId == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        auto prev = dijkstra(startId);

        if (prev[endId] == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        std::vector<int> path;
        for (int at = endId; at != -1; at = prev[at]) {
            path.push_back(at);
        }
        std::reverse(path.begin(), path.end());
        return path;
    }

    std::vector<std::vector<int>> getAllPathsByName(const std::string& start, const std::string& end) const {
        int startId = getVertexIdByName(start);
        int endId = getVertexIdByName(end);

        if (startId == -1 || endId == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        std::unordered_set<std::string> uniquePaths;
        std::vector<std::vector<int>> allPaths;
        std::vector<int> path;
        std::vector<bool> visited(vertices.size(), false);

        dfsAllPaths(startId, endId, visited, path, allPaths, uniquePaths);

        return allPaths;
    }

    int getVertexIdByName(const std::string& name) const {
        auto it = nameToId.find(name);
        if (it != nameToId.end()) {
            return it->second;
        }
        return -1;
    }

    int vertexCount() {
        return vertices.size();
    }

private:
    std::vector<Vertex> vertices;
    std::unordered_map<std::string, int> nameToId;

    void dfsAllPaths(int current, int end, std::vector<bool>& visited, std::vector<int>& path, std::vector<std::vector<int>>& allPaths, std::unordered_set<std::string>& uniquePaths) const {
        visited[current] = true;
        path.push_back(current);

        if (current == end) {
            std::string pathKey = generatePathKey(path);
            if (uniquePaths.find(pathKey) == uniquePaths.end()) {
                uniquePaths.insert(pathKey);
                allPaths.push_back(path);
            }
        } else {
            for (const auto& edge : vertices[current].edges) {
                if (!visited[edge.dest]) {
                    dfsAllPaths(edge.dest, end, visited, path, allPaths, uniquePaths);
                }
            }
        }

        path.pop_back();
        visited[current] = false;
    }

    std::string generatePathKey(const std::vector<int>& path) const {
        std::string key;
        for (int vertex : path) {
            key += std::to_string(vertex) + "-";
        }
        return key;
    }
};

#endif // GRAPH_H
