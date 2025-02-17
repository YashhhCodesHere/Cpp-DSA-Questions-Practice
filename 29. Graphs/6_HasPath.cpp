#include <bits/stdc++.h>
using namespace std;

/*
    Graph representation using an 'ADJACENCY LIST'.
    - Undirected, Unweighted Graph.
*/

class Graph {
    int V;  // Number of vertices
    vector<list<int>> l; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        l.resize(V); // Resize vector to hold 'V' lists
    }

    void addEdge(int u, int v) { 
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        cout << "Printing Graph:-\n";
        for (int u = 0; u < V; u++) {
            cout << u << " : ";
            for (auto v : l[u]) { 
                cout << v << " ";
            }
            cout << "\n";
        }
    }

    bool hasPathHelper(int src, int dest, vector<bool> &visited) {
        if (src == dest) {
            return true;
        }
        visited[src] = true;
        for (auto v : l[src]) {
            if (!visited[v]) {
                if (hasPathHelper(v, dest, visited)) {
                    return true;  
                }
            }
        }
        return false;  //Ensure false is returned if no path is found
    }

    bool hasPath(int src, int dest) {
        vector<bool> visited(V, false);
        return hasPathHelper(src, dest, visited);
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(1, 3);
    graph.addEdge(4, 0);

    graph.print();

    if(graph.hasPath(0, 4)) {
        cout << "Path exists between 0 and 4\n";
    } else {
        cout << "Path does not exist between 0 and 4\n";
    }

    return 0;
}
