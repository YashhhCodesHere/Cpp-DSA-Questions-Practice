#include <bits/stdc++.h>
using namespace std;

/*
    Cycle Detection can be performed by both BFS as well as DFS.
    But, DFS is more efficient in this case.
    
    Back Edge: In terms of Graphs, an edge that connects a vertex to one of its ancestors in the DFS Tree.
    If there's a back edge in the (UNDIRECTED GRAPH), then the graph contains a cycle.

    Condition for Cycle:-
        [ (Neighbor is Visited) && (Neighbor is not Parent) ] -> Back Edge (Cycle Detected)
*/

class Graph{
    int V;
    unordered_map<int, vector<int>> l;

    bool isCyclicUtil(int src, unordered_map<int, bool>& visited, int parent){  // O(V+E)
        visited[src] = true;

        for(auto v : l[src]){
            if(!visited[v]){
                if(isCyclicUtil(v, visited, src)){
                    return true;
                }
            }else if(v != parent){    // Got a Back Edge (Cycle)
                return true;
            }
        }
        return false;
    }

public:
    Graph(int vertices){
        V = vertices;
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int i = 0; i < V; i++){
            cout << i << " : ";
            for(auto neighbor : l[i]){
                cout << neighbor << " ";
            }
            cout << "\n";
        }
    }

    bool isCyclic(int src = 0){
        unordered_map<int, bool> visited;
        return isCyclicUtil(src, visited, -1);
    }
};

int main(){
    
    return 0;
}