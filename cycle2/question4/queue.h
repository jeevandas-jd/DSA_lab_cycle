//
// Created by jeevandas on 20/4/24.
//
#ifndef DSA_LAB_CYCLE_QUEUE_H
#define DSA_LAB_CYCLE_QUEUE_H
#include "linkedlist.h"
using namespace std;
class queue {
public:
    LinkedList<int> qls;
    int front;
    int reare;
    int lenght;
    queue(int length){
        this->lenght=length;
        this->front=-1;
        this->reare=-1;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"queue overflow!!"<<endl;

            return;
        }
        else{
            if(front==-1){
                front=front+1;
            }

            qls.insertAtEnd(data);
            reare=reare+1;
        }
    }
    bool isEmpty(){
        if(front==-1 || front>reare){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(reare>=lenght-1){
            return true;
        }
        else{
            return false;
        }

    }
    void dequeue(){
        if(isEmpty()){
            cout<<"queue underflow"<<endl;
        }
        else{
            qls.deleteB();
            front=front+1;
        }
    }
    void display(){
        qls.display();
    }
};


#endif //DSA_LAB_CYCLE_QUEUE_H
