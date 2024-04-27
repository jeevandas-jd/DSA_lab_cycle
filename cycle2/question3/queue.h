//
// Created by jeevandas on 20/4/24.
//

#ifndef DSA_LAB_CYCLE_QUEUE_H
#define DSA_LAB_CYCLE_QUEUE_H
#include <iostream>
using namespace std;



class queue {
public:
    int front;
    int rear;
    int* arr;
    int length;
    queue(int length){
        this->front=-1;
        this->length=length;
        this->rear= -1;
        this->arr=new int[length];
    }
    ~queue(){
        delete[] arr;
    }
    bool isFull(){
        if(rear>=length-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(front==-1 || front>rear){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"queue overflow!!"<<endl;
            return;
        }
        else{
            if(front=-1){
                front=front+1;
                rear=rear+1;
                arr[rear]=data;
            }
            else{
                rear=rear+1;
                arr[rear]=data;

            }
        }
    }
    void dequeue(){
        if(not isEmpty()){
            rear=rear-1;
        }
        else{
            cout<<"queue underflow"<<endl;
        }
    }
    bool underFlow(){
        return isEmpty();
    }
    bool overFlow(){
        return isFull();
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


#endif //DSA_LAB_CYCLE_QUEUE_H
