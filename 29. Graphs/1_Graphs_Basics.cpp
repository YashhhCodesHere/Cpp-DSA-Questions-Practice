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

    

*/

int main(){
    
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