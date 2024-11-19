#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjMatrix;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjMatrix.resize(vertices, vector<int>(vertices, 0));
        adjList.resize(vertices);
    }

    void addEdgeMatrix(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // For undirected graph
    }

    void addEdgeList(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    void displayMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void displayList() {
        cout << "Adjacency List:" << endl;
        for (int i = 0; i < numVertices; i++) {
            cout << i << ": ";
            for (int j : adjList[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices = 5;
    Graph g(vertices);

    g.addEdgeMatrix(0, 1);
    g.addEdgeMatrix(0, 4);
    g.addEdgeMatrix(1, 2);
    g.addEdgeMatrix(1, 3);
    g.addEdgeMatrix(1, 4);
    g.addEdgeMatrix(2, 3);
    g.addEdgeMatrix(3, 4);

    g.addEdgeList(0, 1);
    g.addEdgeList(0, 4);
    g.addEdgeList(1, 2);
    g.addEdgeList(1, 3);
    g.addEdgeList(1, 4);
    g.addEdgeList(2, 3);
    g.addEdgeList(3, 4);

    g.displayMatrix();
    g.displayList();

    return 0;
}