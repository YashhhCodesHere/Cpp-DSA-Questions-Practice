#include <bits/stdc++.h>
using namespace std;

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

    void calculateIndegree(vector<int>& indegree){
        for(int u = 0; u < V; u++){
            for(auto v : l[u]){
                indegree[v]++;
            }
        }
    }

    void cycleDetectionUsingKahns(){
        vector<int> indegree(V, 0);
        calculateIndegree(indegree);

        queue<int> q;
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        int cnt = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cnt++;

            for(auto v : l[curr]){
                indegree[v]--;
                if(indegree[v] == 0){   // Pushing only those neighbors who got 0 pending dependencies
                    q.push(v);
                }
            }
        }

        if(cnt != V){
            cout << "Cycle Detected\n";
        }else{
            cout << "No Cycle Detected\n";
        }
    }
};

int main(){
    
    return 0;
}