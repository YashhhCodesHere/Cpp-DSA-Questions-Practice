#include <bits/stdc++.h>
using namespace std;

/*
    In case of Directed Graphs, we need to keep track of the 'Back Edge' and 'Cross Edge' as well.

    Condition for Cycle:-
        [ (Neighbor is Visited) && (Neighbor is not Parent) ] -> Back Edge (Cycle Detected)
        [ (Neighbor is Visited) && (Neighbor is Parent) ] -> Cross Edge (Cycle Detected)
    In short:-
        [ Node is visited && Node exists in the recursion stack ]-> Cycle Detected
*/

class Graph{
    int V;
    unordered_map<int, vector<int>> l;
    bool isUndirected;

    bool isCyclicUtil(int src, unordered_map<int, bool>& visited, unordered_map<int, bool>& inStack){  // O(V+E)
        visited[src] = true;
        inStack[src] = true;

        for(auto v : l[src]){
            if(!visited[v]){
                if(isCyclicUtil(v, visited, inStack)){  // Condition for making visited[v] = true is when the function returns true
                    return true;
                }
            }else if(inStack[v]){   // Got a Back Edge (Cycle)
                return true;
            }
        }
        inStack[src] = false;
        return false;
    }

public:
    Graph(int vertices, bool isUndirected = true){
        V = vertices;
        this->isUndirected = isUndirected;
    }

    void addEdge(int u, int v){    // u ---> v
        l[u].push_back(v);
        if(isUndirected){   // u --- v
            l[v].push_back(u);
        }
    }

    bool isCyclic(){
        unordered_map<int, bool> visited;
        unordered_map<int, bool> inStack;

        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(isCyclicUtil(i, visited, inStack)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    
    return 0;
}