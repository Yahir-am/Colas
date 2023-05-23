
typedef struct node{
    int e;
    struct node *next;
}Node;

typedef struct queue{
    Node *head;
    Node *tail;
}Queue;


void create(Queue *qu);
int isEmpty(Queue qu);
void enqueue(Queue *qu, int e);
int dequeue(Queue *qu);
void show(Queue *qu);
void clean(Queue *qu);

#include "queue.c"

