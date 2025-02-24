#include <bits/stdc++.h>
using namespace std;

/*
    Topological Sorting is a linear ordering of vertices such that for every directed edge u->v, vertex u comes before v in the ordering. 
    It is used for 'Directed Acyclic Graphs' (DAGs).
    The Order of Vertices provided after Topological Sorting, are the order of their dependencies, and Data of the nodes may NOT be in ascending or descending order.
    Topological Sorting is NOT possible for Graphs having cycles.
    so, In graph, there can be multiple order of Topological Sortings possible, as long as it's satisfying all dependencies condition.

    For any graph where u->v, where
    v is dependent on u, then u comes before v in the ordering.
*/

class Graph{
    int V;
    unordered_map<int, vector<int>> l;
    bool isDirected;
public:
    Graph(int vertices, bool isDirected = false){
        V = vertices;
        this->isDirected = isDirected;
    }

    void addEdge(int u, int v){
        l[u].push_back(v);  // Directed Graph
        if(!isDirected){
            l[v].push_back(u);  // Undirected Graph
        }
    }

    void print(){
        cout << "Graph:-\n";
        for(int i = 0; i < V; i++){
            cout << i << " -> ";
            for(auto x : l[i]){
                cout << x << ", ";
            }
            cout << "\n";
        }
    }

    void topologicalSortUtil(int src, vector<bool>& visited, stack<int>& s){    // O(V+E)
        visited[src] = true;

        for(auto v : l[src]){
            if(!visited[v]){
                topologicalSortUtil(v, visited, s);
            }
        }

        s.push(src);
    }

    void topologicalSort(){     // O(V+E)
        vector<bool> visited(V, false);
        stack<int> s;

        for(int i = 0; i < V; i++){
            if(!visited[i]){
                topologicalSortUtil(i, visited, s);
            }
        }

        cout << "Topological Sorting Order: ";
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
    }
};

int main(){
    Graph g(6, true);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 0);
    g.addEdge(5, 2);

    g.topologicalSort();
    
    return 0;
}