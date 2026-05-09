#ifndef GRAPH_H
#define GRAPH_H

#include "LinkedList.h"

enum {
    A,B,C,D,E,F,G,H,I,J
};

typedef struct _Graph {
    int num_vertex;
    int num_edge;
    List* adjList;
}Graph;

void graphInit(Graph* graph,int num_vertex);
void graphDestroy(Graph* graph);
void addEdge(Graph* graph, int from, int to);
void showGraphEdgeInfo(Graph* graph);
#endif
