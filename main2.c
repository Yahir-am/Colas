#include <stdio.h>
#include "queueP.h"

int main(){
    queuep qp;
    element a,b,c,d;
    createQP(&qp);
    a.value = 10;
    a.priority = 0;
    b.value = 20;
    b.priority = 1;
    c.value = 30;
    c.priority = 2;
    d.value = 40;
    d.priority = 3;
    insertInPriority(&qp,a);
    insertInPriority(&qp,b);
    insertInPriority(&qp,c);
    insertInPriority(&qp,d);
    deleteInPriority(&qp);
    deleteQP(&qp);
    return 0;
}