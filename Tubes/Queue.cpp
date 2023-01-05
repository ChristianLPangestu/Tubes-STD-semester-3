#include "Queue.h"
void createQueue(Queue &Q){
first(Q)=nil;
};
adr createElement(infotype input){
    adr P = new element;
    info(P) = input;
    next(P) = nil;
    return P;
};
void enqueue(Queue &Q, adr input){
    if(first(Q) == nil){
        first(Q) = input;
    }
    else{
        adr P = first(Q);
        while(next(P)!=nil){
            P = next(P);
        }
        next(P) = input;
    }
};
adr dequeue(Queue &Q){
    adr P;
    if(first(Q)==nil){
        cout<<"Queue Kosong"<<endl;
    }
    else if(next(first(Q)) == nil){
        P = first(Q);
        first(Q) = nil;
    }
    else{
        P = first(Q);
        first(Q) = next(first(Q));
        next(P) = nil;
    }
    return P;
};
void showQueue(Queue &Q){
    adr P = first(Q);
    if(P == nil){
        cout << "Schedule Kosong" << endl;
    }else{
        while(P != nil){
        cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<<endl;

        P = next(P);
        }
    }

    cout<<endl;
};
void firstComeFirstServe(Queue &Q){
    int waiting = 0;
    adr P = first(Q);
    while(P != nil){
        info(P).waitingTime = waiting;
        waiting += info(P).burstTime;
        info(P).turnAroundTime = waiting;
         cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<<", Waiting Time : "<<info(P).waitingTime<<", Turn Around Time : "<<info(P).turnAroundTime<<endl;

         P = next(P);
    }
    cout<<endl;
};
/*void scheduling(Queue &Q){

    int input;
    cout<<"Masukan strict : ";cin>>input;
    while(input != -1){
        adr P = dequeue(Q);
        while(input > info(P).burstTime){
            input -= info(P).burstTime;
            info(P).burstTime = 0;
            cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<<endl;
            P = dequeue(Q);
        }
        info(P).burstTime -= input;
        //first
        cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<<endl;
        if(info(P).burstTime > 0){
            enqueue(Q,P);
        }
        cout << endl;
        cout << "New Schedule" << endl;
        firstComeFirstServe(Q);
        cout<<"Masukan strict : ";cin>>input;
    }
    cout<<"scheduling berakhir"<<endl<<endl;
};*/
void scheduling(Queue &Q1,Queue &Q2,Queue &Q3){

    int input;
    cout<<"Masukan strict : ";cin>>input;
    while(input != -1){
        adr P = dequeue(Q1);
        while(input >= info(P).burstTime){
            input -= info(P).burstTime;
            info(P).burstTime = 0;
            cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<< " --Selesai--" << endl;
            fillQueue(Q1,Q2,Q3);
            P = dequeue(Q1);
        }
        info(P).burstTime -= input;
        cout<<"Data id : "<<info(P).id<<", Burst Time : "<<info(P).burstTime<< " --Sisa--"<<endl;
        if(info(P).burstTime > 0){
            enqueue(Q1,P);
        }
        cout<<endl;
        cout << "==========NewQ1Schedule==========" << endl;
        firstComeFirstServe(Q1);
        cout<<"Masukan strict : ";cin>>input;
    }
    cout<<"scheduling berakhir"<<endl<<endl;
};
void fillQueue(Queue &Q1,Queue &Q2,Queue &Q3){
    adr P;
    if(first(Q2)!=nil){
        P = dequeue(Q2);
        enqueue(Q1,P);
    }
    if(first(Q3)!=nil){
        P = dequeue(Q3);
        enqueue(Q2,P);
    }
    cout << endl;
    cout<<"Schedule Q1 :"<<endl;
    showQueue(Q1);
    cout<<"Schedule Q2 :"<<endl;
    showQueue(Q2);
    cout<<"Schedule Q3 :"<<endl;
    showQueue(Q3);
};
