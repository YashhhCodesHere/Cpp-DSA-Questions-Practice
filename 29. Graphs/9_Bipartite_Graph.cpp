#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<list<int>> l;
public:
    Graph(int vertices){
        V = vertices;
        l.resize(V);
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        cout << "Printing Graph:-\n";
        for(int i = 0; i < V; i++){
            cout << i << " : ";
            for(auto neighbor : l[i]){
                cout << neighbor << " ";
            }
            cout << "\n";
        }
    }

    bool isBipartite(){     // We're using BFS here for checking the graph is bipartite or NOT!

    }
};

int main(){
    
    return 0;
}

/*
    We can use both Bfs and Dfs to check either the graph is bipartite or NOT!
    But, BFS is more efficient and intuitive in this case.

    In Bipartite Graph, 
    the graph must be divided into two sets such that there's no edge between the vertices of the same set.
    or In other words, two directly connected vertices must belong to different sets.
    or, NO EDGE SHOULD CONNECT VERTICES OF THE SAME SET.

    We use graph coloring approach to check either the graph is bipartite or NOT!
    
                                        Neighbor
                            |                           |
                        Visited                   Non-Visited
                |                   |                   |
            Same Colour         Diff Colour       Opposite Colour
                |
              False

    If we get a vertex that has the same color as its neighbor, then the graph is NOT Bipartite.
*/