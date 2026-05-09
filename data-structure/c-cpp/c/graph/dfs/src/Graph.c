#include "Graph.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void graphInit(Graph* graph, int num_vertex) {
    graph -> num_vertex = num_vertex;
    graph -> num_edge = 0;
    graph -> adjList = (List*)malloc(sizeof(List) * num_vertex);
    graph -> visited = (int*)malloc(sizeof(int) * num_vertex);

    memset(graph -> visited,0,sizeof(int) * num_vertex);
}
void graphDestroy(Graph* graph) {
    if (graph -> adjList != NULL) {
        free(graph -> adjList);
    }
    if (graph -> visited != NULL) {
        free(graph -> visited);
    }
}

void showGraphEdgeInfo(Graph* graph) {
    for (int i = 0;i<graph -> num_vertex;i++) {
        printf("vertex - %d : ",i);
        LData vertex;
        if (first(&graph -> adjList[i],&vertex)) {
            printf("%d ",vertex);
            while (next(&graph -> adjList[i],&vertex)) {
                printf("%d ",vertex);
            }
        }
        printf("\n");
    }
}