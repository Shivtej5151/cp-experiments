#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int vertices;
    vector<vector<int>> adjList;

public:
    Graph(int v) : vertices(v), adjList(v) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Since the graph is undirected
    }

    int countEdges() {
        int edgeCount = 0;
        for (int i = 0; i < vertices; ++i) {
            edgeCount += adjList[i].size();
        }
        return edgeCount / 2; // Each edge is counted twice
    }

    void displayGraph() {
        for (int i = 0; i < vertices; ++i) {
            cout << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int vertices = 5;
    Graph g(vertices);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Graph adjacency list:\n";
    g.displayGraph();

    cout << "\nNumber of edges in the graph: " << g.countEdges() << "\n";

    return 0;
}