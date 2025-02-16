#include <bits/stdc++.h>
using namespace std;

/*
    Depth First Search (DFS) is a graph traversal algorithm that traverses by 'Keep going to first unvisited neighbor' and then 'Backtrack' if stuck.
    DFS uses Stack Data Structure (LIFO) for traversal. Although, we can also use Recursion for the same, as it uses implicit System Stack.
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

    void dfsHelper(int u, vector<bool>& visited){     // Time Complexity: O(V+E) -> V: Number of Vertices, E: Number of Edges
        cout << u << " ";
        visited[u] = true;
        cout << u << " ";

        for(int v : l[u]){
            if(!visited[v]){
                dfsHelper(v, visited);
            }
        }
    }

    void dfs(int src = 0){
        vector<bool> visited(V, false);    // Initialised with size V and all values as false
        dfsHelper(src, visited);
        cout << "\n";
    }

    // Prefer this function for disconnected graphs to print all the vertices
    void dfsForDisconnected(){
        vector<bool> visited(V, false);    // Initialised with size V and all values as false
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                dfsHelper(i, visited);
            }
        }
        cout << "\n";
    }
};

int main(){
    Graph graph(5);

    // Adding Edges:-
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(1, 3);

    // Print all the connected vertices:-
    graph.print();

    // DFS Traversal:-
    cout << "DFS Traversal: ";
    graph.dfs();

    return 0;
}