#include <bits/stdc++.h>
using namespace std;

/*
    We're using 'ADJACENCY LIST' here for implementation of Graphs:-
    The below code is for an undirected, unweighted graph.

    - For a Directed Graph, we'll add an edge from `u` to `v` only.
    - For a Weighted Graph, we'll use `pair<int, int>` to store `(v, weight)`.
*/

class Graph {
    int V;  // Total number of vertices
    vector<list<int>> l; // Use vector instead of raw pointer for automatic memory management

public:
    Graph(int V) {
        this->V = V;
        l.resize(V); // Resize the vector to hold V lists
    }

    void addEdge(int u, int v) { // u---v : 'u' and 'v' are connected by an edge
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        cout << "Printing Graph:-\n";
        for (int u = 0; u < V; u++) {
            cout << u << " : ";
            for (auto v : l[u]) { // Use reference to avoid unnecessary copying
                cout << v << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Graph graph(5);

    // Adding Edges:-
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(1, 3);

    // Print all the connected vertices:-
    graph.print();
    return 0;
}
