#include <bits/stdc++.h>
using namespace std;

/*
    We check that the graph is bipartite or NOT using BFS via Graph Coloring Approach.
    We assign colors to the vertices of the graph such that no two directly connected vertices have the same color.
    If we get a vertex that has the same color as its neighbor, then the graph is NOT Bipartite.

    Although, we can directly check for the graph is Bipartite or NOT using the following approach:-
    If Graph is:-
        - ACYCLIC -> Then, it's Bipartite.
        - CYCLIC & EVEN CYCLE -> Then, it's Bipartite.
        - CYCLIC & ODD CYCLE -> Then, it's NOT Bipartite.
    
*/

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

    bool isBipartite(int src = 0){     // We're using BFS here for checking the graph is bipartite or NOT!
        queue<int> q;
        vector<bool> visited(V, false);
        vector<int> color(V, -1);

        q.push(src);
        color[src] = 0;
        visited[0] = true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(auto neighbor : l[curr]){
                if(!visited[neighbor]){
                    visited[neighbor] = true;
                    color[neighbor] = !color[curr];
                }else if(color[neighbor] == color[curr]){
                    return false;
                }
            }
        }

        return true;
    }

    // More Optimised Approach in terms of Space Complexity!
    bool isBipartiteWithoutVisited(int src = 0){     // We're using BFS here for checking the graph is bipartite or NOT!
        queue<int> q;
        vector<int> color(V, -1);

        q.push(src);
        color[src] = 0;

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(auto v : l[curr]){
                if(color[v] == -1){     // Node Unvisited
                    color[v] = !color[curr];
                    q.push(v);
                }else if(color[v] == color[curr]){
                    return false;
                }
            }
        }

        return true;
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