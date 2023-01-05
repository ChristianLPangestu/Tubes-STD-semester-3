#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
#define info(P) P->info
#define next(P) P->next
#define first(L) L.first
#define nil NULL
using namespace std;

struct infotype{
    int burstTime, waitingTime, turnAroundTime;
    string id;
};
typedef struct element *adr;
struct element{
    infotype info;
    adr next;
};
struct Queue{
    adr first;
};
void createQueue(Queue &Q);
adr createElement(infotype input);
void enqueue(Queue &Q, adr input);
adr dequeue(Queue &Q);
void showQueue(Queue &Q);
void firstComeFirstServe(Queue &Q);
void scheduling(Queue &Q1,Queue &Q2,Queue &Q3);
void fillQueue(Queue &Q1,Queue &Q2,Queue &Q3);

#endif // QUEUE_H_INCLUDED
