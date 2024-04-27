//
// Created by jeevandas on 20/4/24.
//

#ifndef DSA_LAB_CYCLE_DEQ_H
#define DSA_LAB_CYCLE_DEQ_H
#include <iostream>
using namespace std;

class DEQ {
public:
    int front;
    int reare;
    int length;
    int* arr;
    DEQ(int length){
        this->length=length;
        this->reare=-1;
        this->front=-1;
        this->arr=new int[length];
    }
    ~DEQ(){
        delete[] arr;
    }
    bool isFull(){
        if(reare>=length-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(front==-1||front>reare){
            return true;
        }
        else{
            return false;
        }
    }
    void InsertAtFront(int data){
        if(not isFull()){
            if(front=-1){
                front=front+1;
                arr[front]=data;
                reare=reare+1;
            }
            else{
                int i=reare;
                while(i<length){
                    
                }
            }
        }
    }
};


#endif //DSA_LAB_CYCLE_DEQ_H
