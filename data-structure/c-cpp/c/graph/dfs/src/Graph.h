#ifndef GRAPH_H
#define GRAPH_H

enum {
    A,B,C,D,E,F,G,H,I,J,
};

#include "LinkedList.h"

typedef struct _Graph {
    int num_vertex;
    int num_edge;
    List* adjList;
    int* visited;
}Graph;

void graphInit(Graph* graph, int num_vertex);
void graphDestroy(Graph* graph);
void addEdge(Graph* graph, int from, int to);
void showGraphEdgeInfo(Graph* graph);
#endif
