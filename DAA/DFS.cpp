#include <iostream>
#include <list>
#include <ctime>

using namespace std;

class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void DFS(int startVertex);
  void DFSHelper(int vertex);
};

Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

void Graph::DFS(int startVertex) {
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  DFSHelper(startVertex);
}

void Graph::DFSHelper(int vertex) {
  visited[vertex] = true;
  cout << "Visited " << vertex << " ";

  list<int>::iterator i;
  for (i = adjLists[vertex].begin(); i != adjLists[vertex].end(); ++i) {
    int adjVertex = *i;
    if (!visited[adjVertex]) {
      DFSHelper(adjVertex);
    }
  }
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  clock_t start = clock();
  g.DFS(2);
  clock_t end = clock();
  double timeDFS = double(end - start) / CLOCKS_PER_SEC * 1000000;

  cout << endl << "Time taken for Depth-first search is: " << timeDFS << " microseconds" << endl;
  cout << "Mohit Kumar 04076803121" << endl;

  return 0;
}
