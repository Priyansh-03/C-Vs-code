#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

struct node {
    int vertex;
    struct node *next;
};

struct node *createNode(int v) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct queue {
    int items[MAX_VERTICES];
    int front, rear;
};

struct queue *createQueue() {
    struct queue *q = malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

bool isEmpty(struct queue *q) {
    return q->rear == -1;
}

void enqueue(struct queue *q, int value) {
    q->rear++;
    q->items[q->rear] = value;
    if (q->front == -1) {
        q->front = q->rear;
    }
}

int dequeue(struct queue *q) {
    int item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
    return item;
}

void addEdge(struct node *adj[], int src, int dest) {
    struct node *newNode = createNode(dest);
    newNode->next = adj[src];
    adj[src] = newNode;
}

void printBFS(int startVertex, struct node *adj[], int numVertices) {
    bool visited[numVertices];
    int i;
    for (i = 0; i < numVertices; i++) {
        visited[i] = false;
    }

    struct queue *q = createQueue();
    visited[startVertex] = true;
    enqueue(q, startVertex);

    while (!isEmpty(q)) {
        int currentVertex = dequeue(q);
        printf("%d ", currentVertex);

        struct node *temp = adj[currentVertex];
        while (temp != NULL) {
            int adjVertex = temp->vertex;
            if (!visited[adjVertex]) {
                visited[adjVertex];
            }
        }
    }
}
