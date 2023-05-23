#include <stdio.h>
#include "queue.h"

int main(){
    Queue qu;
    create(&qu);
    enqueue(&qu,1);
    enqueue(&qu,2);
    enqueue(&qu,3);
    enqueue(&qu,4);
    show(&qu);
    dequeue(&qu);
    show(&qu);
    clean(&qu);
    show(&qu);
    return 0;
}