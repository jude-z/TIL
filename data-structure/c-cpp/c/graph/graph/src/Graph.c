#include "Graph.h"
#include <stdlib.h>
#include <stdio.h>
int comp(Data data1, Data data2);
void graphInit(Graph* graph, int num_vertex) {
    graph -> adjList = (List*)malloc(sizeof(List) * num_vertex);
    graph -> num_vertex = num_vertex;
    graph -> num_edge = 0;

    for (int i = 0;i<num_vertex;i++) {
        init(&graph->adjList[i],comp);
    }
}

void graphDestroy(Graph* graph) {
    if (graph -> adjList != NULL) {
        free(graph -> adjList);
    }
}
void addEdge(Graph* graph, int from, int to) {
    insert(&graph -> adjList[from],to);
    insert(&graph -> adjList[to],from);
    graph -> num_edge++;
}
void showGraphInfo(Graph* graph) {
    for (int i = 0;i<graph -> num_vertex;i++) {
        printf("vertex - %d : ",i);
        Data vertex;
        if (first(&graph -> adjList[i],&vertex)) {
            printf("%d ",vertex);
            while (next(&graph -> adjList[i],&vertex)) {
                printf("%d ",vertex);
            }
        }
        printf("\n");

    }
}