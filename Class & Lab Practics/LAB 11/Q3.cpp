#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int v, int w) { adj[v].push_back(w); }
    void BFS(int s);
};

void Graph::BFS(int s) {
    vector<bool> visited(V, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        s = q.front();
        cout << s << " ";
        q.pop();

        for (int i : adj[s]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Breadth First Traversal starting from vertex 2:\n";
    g.BFS(2);

    return 0;
}
