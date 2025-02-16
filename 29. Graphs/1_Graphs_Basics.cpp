#include <bits/stdc++.h>
using namespace std;

/*
    Graphs & Dynamic Programming are the most important 'Data Structures' & 'Algorithms' respectively as per placement and interview's perspective.
    Graphs are basically 'Network Data Structures made up of nodes/vertices and edges',
    which is used for various practical applications like Social Networks, Maps, etc.
    Graph is represented as G(V, E), where V is the set of vertices and E is the set of edges.

    Graphs may consists of multiple components which are connected to each other through edges.
    DisConnected components are called 'Islands' in Graphs. -> DISJOINT GRAPH

    Graphs can be implemented using 2 ways:-
    1. Adjacency List:-
        -> Using Doubly Linked List: Array of linked lists.
        - Insertion: push_front(), push_back()
        - Deletion: pop_front(), pop_back()
        - Front(), Back(), size(), empty()
        - Can also be implemented with array, vectors, unordered_map, etc., with linkedlist

    2. Adjacency Matrix:-
        -> Using 2D Array: 2D Array of size VxV, where V is the number of vertices.
        - Mark '1' if a node is connected to another node, else '0'.
        - Can use weights instead too (if weighted graph).
        - Space Complexity: O(V^2) -> Consumes more space.
        - Time Complexity: O(1) -> Faster access to edges.
        - Used when the graph is dense. (Most of the nodes are connected or, edges are present)

    3. Edge List:-
        -> List of edges which are connected to each other.
        - Used when Edges Operations / Queries are to be performed.
        - Used when the graph is sparse. (Few edges are present)
        - Space Complexity: O(E) -> Consumes less space.
        - Time Complexity: O(E) -> Slower access to edges.
        - Used when the graph is sparse. (Few edges are present)

    4. Implicit Graph:-
        -> Graphs which are not explicitly defined, mostly 2D arrays are treated as implicit graphs.
        - Used in Grid Based Problems, Floodfill, etc.
        - For X(i,j):-
            Neighbour 1 (Up): X(i-1, j)
            Neighbour 2 (Down): X(i+1, j)
            Neighbour 3 (Left): X(i, j-1)
            Neighbour 4 (Right): X(i, j+1)

*/

class Graph
{
private:
    unordered_map<int, vector<int>> adjList; // Adjacency list representation
    int V;                                   // Number of vertices

    // Helper function for DFS
    void DFSUtil(int v, unordered_map<int, bool> &visited)
    {
        cout << v << " ";
        visited[v] = true;

        for (int neighbor : adjList[v])
        {
            if (!visited[neighbor])
            {
                DFSUtil(neighbor, visited);
            }
        }
    }

    // Helper function for cycle detection (DFS-based)
    bool isCyclicUtil(int v, unordered_map<int, bool> &visited, int parent)
    {
        visited[v] = true;

        for (int neighbor : adjList[v])
        {
            if (!visited[neighbor])
            {
                if (isCyclicUtil(neighbor, visited, v))
                    return true;
            }
            else if (neighbor != parent)
            {
                return true; // Found a back edge (cycle)
            }
        }
        return false;
    }

public:
    // Constructor
    Graph(int vertices) : V(vertices) {}

    // Add an edge to the graph
    void addEdge(int u, int v, bool isDirected = false)
    {
        adjList[u].push_back(v);
        if (!isDirected)
        {
            adjList[v].push_back(u);
        }
    }

    // Remove an edge from the graph
    void removeEdge(int u, int v)
    {
        auto &vecU = adjList[u];
        vecU.erase(remove(vecU.begin(), vecU.end(), v), vecU.end());

        auto &vecV = adjList[v];
        vecV.erase(remove(vecV.begin(), vecV.end(), u), vecV.end());
    }

    // Display the adjacency list
    void display()
    {
        for (auto &pair : adjList)
        {
            cout << pair.first << " -> ";
            for (int neighbor : pair.second)
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // Breadth-First Search (BFS)
    void BFS(int start)
    {
        unordered_map<int, bool> visited;
        queue<int> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjList[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    // Depth-First Search (DFS)
    void DFS(int start)
    {
        unordered_map<int, bool> visited;
        DFSUtil(start, visited);
        cout << endl;
    }

    // Cycle detection in an undirected graph
    bool isCyclic()
    {
        unordered_map<int, bool> visited;
        for (auto &pair : adjList)
        {
            if (!visited[pair.first])
            {
                if (isCyclicUtil(pair.first, visited, -1))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph g(5); // Creating a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(3, 4);

    cout << "Graph adjacency list:" << endl;
    g.display();

    cout << "\nBFS starting from node 0: ";
    g.BFS(0);

    cout << "\nDFS starting from node 0: ";
    g.DFS(0);

    cout << "\nCycle detection: ";
    if (g.isCyclic())
        cout << "Graph contains a cycle" << endl;
    else
        cout << "No cycle in the graph" << endl;

    return 0;
}

/*
    Types of Graph:-
    1. Uni-Directional (DIRECTED) Graph: One-Way Edges between Nodes.(Traverse only one side towards the arrow)
    2. UnDirected Graph: Non Directed Edges between Nodes.(No Direction->Traverse both side)
    3. Bi-Directional Graph: Two-Way Edges between Nodes.(Direction->Traverse both side)
    -> Undirected and Bi-Directional Graphs are treated to be same.
    4. Weighted Graph: Edges have some values(Weights) associated with them. Values can be distance, time, cost, etc.
    5. UnWeighted Graph: Edges have no weights associated with them.
    6. Cyclic Graph: Graphs having cycles (Loops) in them.
    7. Acyclic Graph: Graphs having no cycles (Loops) in them.
    8. Connected Graph: Graphs having all nodes connected to each other.
    9. DisConnected Graph: Graphs having some nodes disconnected from each other.
    10. Tree: A connected graph with no cycles.
    11. Forest: A collection of trees.
    12. Complete Graph: A graph where each node is connected to every other node.
    13. Sparse Graph: A graph where very few edges are present.
    14. Dense Graph: A graph where most of the edges are present.
    15. Bipartite Graph: A graph whose nodes can be divided into two independent sets such that there is no edge between nodes of the same set.
    16. Planar Graph: A graph that can be drawn on a plane without any edges crossing.
    17. Eulerian Graph: A graph that has a cycle that includes every edge exactly once.
    18. Hamiltonian Graph: A graph that has a cycle that includes every vertex exactly once.
    19. Regular Graph: A graph where each node has the same number of neighbors.
    20. Self-Loop Graph: A graph where a node is connected to itself.
    21. Multi-Graph: A graph that can have multiple edges between the same pair of nodes.
    22. Simple Graph: A graph with no self-loops and no multiple edges between the same pair of nodes.
    23. Directed Acyclic Graph (DAG): A directed graph with no cycles.
    24. Directed Cyclic Graph: A directed graph with cycles.
    25. Directed Strongly Connected Graph: A directed graph where there is a path from every node to every other node.
    26. Directed Weakly Connected Graph: A directed graph where replacing all directed edges with undirected edges produces a connected undirected graph.
*/