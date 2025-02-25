#include <bits/stdc++.h>
using namespace std;

/*
    Kahn's Algorithm uses BFS for Topological sorting, & it's also used for cycle detection in directed graphs.
    This algorithm uses the concept of INDEGREE.

    A Directed Acyclic Graphs(DAGS) has atleast:-
        1. One Vertex with indegree = 0.    (Source Vertex/Starting Node)
        2. One Vertex with outdegree = 0.   (Sink Vertex/Ending Node)
    If above 2 conditions aren't satisfied, then it means there's a CYCLE exists in that graph.

    For performing Topological Sorting using Kahn's Algorithm:-
    1.  Push all the vertices with indegree = 0 into the Queue.
    2.  Pop the front element from the Queue, and print it.
    3.  Decrease the indegree of all the adjacent vertices by 1.
    4.  If the indegree of any adjacent vertex becomes 0, then push it into the Queue.
    5.  Repeat the above steps until the Queue is empty.

    We didn't used boolean array to keep track of visited nodes, 
    because we know that DAGs don't have cycles present & we're using indegree to keep track of visited nodes.
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

    void calculateIndegree(vector<int>& indegree){
        for(int u = 0; u < V; u++){
            for(auto v : l[u]){
                indegree[v]++;
            }
        }
    }

    void topoSortKahns(){
        vector<int> indegree(V, 0);
        calculateIndegree(indegree);

        queue<int> q;
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout << curr << " ";

            for(auto v : l[curr]){
                indegree[v]--;
                if(indegree[v] == 0){   // Pushing only those neighbors who got 0 pending dependencies
                    q.push(v);
                }
            }
        }

        cout << "\n";
    }
};

int main(){
    
    return 0;
}