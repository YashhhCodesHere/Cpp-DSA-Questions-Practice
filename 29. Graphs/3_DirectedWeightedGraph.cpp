#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V; // Total number of vertices
    vector<list<pair<int, int>>> l; // Adjacency List using vector

public:
    Graph(int vertices) {
        V = vertices;
        l.resize(V); // Resizing the vector to store V lists
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back({v, wt});
        // l[v].push_back({u, wt}); // Uncomment this line for an undirected graph
    }

    void print() {
        cout << "Printing Connected Vertices (Vertex -> (Neighbor, Weight)):\n";
        for (int u = 0; u < V; u++) {
            if (!l[u].empty()) { // Print only if the vertex has at least one edge
                cout << u << " -> ";
                for (auto v : l[u]) {
                    cout << "(" << v.first << ", " << v.second << ") ";
                }
                cout << "\n";
            }
        }
    }
};

int main() {
    Graph graph(5);

    // Adding Edges:-
    graph.addEdge(0, 1, 5);
    graph.addEdge(1, 2, 1);
    graph.addEdge(2, 3, 1);
    graph.addEdge(2, 4, 2);
    graph.addEdge(1, 3, 3);

    // Print all the connected vertices:-
    graph.print();

    return 0;
}
