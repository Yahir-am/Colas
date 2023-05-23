
#define SIZE_P 3

typedef struct Element{
    int value;
    int priority;
}element;

#include "queue.h"

typedef struct QueueP{
    int sqp;
    Queue QP[SIZE_P];
}queuep;

void createQP(queuep *qp);
void insertInPriority(queuep *qp, element e);
int isEmptyQP(queuep qp);
int deleteInPriority(queuep *qp);
int deleteQP(queuep *qp);

#include "queueP.c"