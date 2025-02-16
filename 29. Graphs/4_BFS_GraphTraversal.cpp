#include <bits/stdc++.h>
using namespace std;

/*
    Breadth First Search (BFS) is a graph traversal algorithm that traverses the graph level by level.
    In general, unlike for Tree data structure, we don't have any root node in Graphs.
    Hence, we can choose any node as the starting node for traversal, which is 'Source' node.

    (We can start with any vertex, but in general we start with the vertex with the lowest value/Index.)

    BFS is very similar to Level Order Traversal of a Tree, 
    which says 'TRAVERSE TO IMMEDIATE NEIGHBORS FIRST'.
    For that we use use Queue Data Structure (FIFO).
    In Graphs, presence of cycles are very often, which often results to stuck in infinite loop;
    hence we use Boolean-Type Vector to keep track of visited nodes.
    Once the node/vertex gets inside the queue, it's marked as visited!

    BFS Algorithm:-
    1. Create a boolean array 'visited[]' of size V (number of vertices) and initialize all elements as false.
    2. Create a queue 'q'.
    3. Mark the current node as visited and enqueue it to 'q'.
    4. While 'q' is not empty, do the following:
        - Dequeue a vertex from 'q' and print it.
        - Get all adjacent vertices of the dequeued vertex 's'.
        - If an adjacent has not been visited, then mark it visited and enqueue it.
    5. Repeat step 4 until the queue is empty.
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

    void bfs(){     // Time Complexity: O(V+E) -> V: Number of Vertices, E: Number of Edges
        queue<int> q;
        vector<bool> visited(V, false);    // Initialised with size V and all values as false

        q.push(0);  // Starting from node 0
        visited[0] = true;

        while(!q.empty()){
            int u = q.front();
            q.pop();
            cout << u << " ";

            for(auto v : l[u]){     // u --- v
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
                }
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

    // BFS Traversal:-
    cout << "BFS Traversal: ";
    graph.bfs();

    return 0;
}