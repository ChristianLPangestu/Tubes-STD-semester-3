#include "Queue.h"
int main()
{
//Queue 1
    Queue Q1;
    createQueue(Q1);

    infotype a;
    a.burstTime = 20;
    a.id="A1";
    enqueue(Q1,createElement(a));


    a.burstTime = 40;
    a.id="B1";
    enqueue(Q1,createElement(a));

    a.burstTime = 10;
    a.id="C1";
    enqueue(Q1,createElement(a));

    a.burstTime = 50;
    a.id="D1";
    enqueue(Q1,createElement(a));

    a.burstTime = 80;
    a.id="E1";
    enqueue(Q1,createElement(a));

//Queue 2
    Queue Q2;
    createQueue(Q2);

    a.burstTime = 20;
    a.id="A2";
    enqueue(Q2,createElement(a));

    a.burstTime = 40;
    a.id="B2";
    enqueue(Q2,createElement(a));

    a.burstTime = 10;
    a.id="C2";
    enqueue(Q2,createElement(a));

    a.burstTime = 50;
    a.id="D2";
    enqueue(Q2,createElement(a));

    a.burstTime = 80;
    a.id="E2";
    enqueue(Q2,createElement(a));

//Queue 3
    Queue Q3;
    createQueue(Q3);

    a.burstTime = 20;
    a.id="A3";
    enqueue(Q3,createElement(a));

    a.burstTime = 40;
    a.id="B3";
    enqueue(Q3,createElement(a));

    a.burstTime = 10;
    a.id="C3";
    enqueue(Q3,createElement(a));

    a.burstTime = 50;
    a.id="D3";
    enqueue(Q3,createElement(a));

    a.burstTime = 80;
    a.id="E3";
    enqueue(Q3,createElement(a));

    cout<<"========== awal =========="<<endl;
    cout<<"Schedule Q1 :"<<endl;
    showQueue(Q1);
    cout<<"Schedule Q2 :"<<endl;
    showQueue(Q2);
    cout<<"Schedule Q3 :"<<endl;
    showQueue(Q3);
    cout<<"========== First Come First Serve =========="<<endl;
    firstComeFirstServe(Q1);
    cout<<"==========scheduling=========="<<endl;
    scheduling(Q1,Q2,Q3);
    cout<<"========== Q1 =========="<<endl;
    showQueue(Q1);
    cout<<"========== Q2 =========="<<endl;
    showQueue(Q2);
    cout<<"========== Q3 =========="<<endl;
    showQueue(Q3);
    return 0;
}
