//
// Created by jeevandas on 20/4/24.
//

#ifndef DSA_LAB_CYCLE_STACK_H
#define DSA_LAB_CYCLE_STACK_H
#include "linkedlist.h"
template <class T>
class stack {
public:
    LinkedList<T> lls;
    int size;
    stack(int size){
        this->size=size;
    }
    void push(T data){
        if(lls.size()<size) {
            lls.insertAtEnd(data);
        } else{
            cout<<"stack overflow!!"<<endl;
        }
    }
    void pop(){
        if (lls.size()<size){
            cout<<"stack underflow!!"<<endl;
        }
        else{
            lls.deleteEnd();
        }
    }
   void display(){
        lls.display();
    }
};


#endif //DSA_LAB_CYCLE_STACK_H
