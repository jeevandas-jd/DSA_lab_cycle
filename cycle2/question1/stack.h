//
// Created by jeevandas on 20/4/24.
//

#ifndef DSA_LAB_CYCLE_STACK_H
#define DSA_LAB_CYCLE_STACK_H

#include <iostream>
using namespace std;
template <class T>

class stack {
public:
    int top;
    int size;
    T a[100];
    stack(int size);
    void push(int);
    void pop();
    bool isEmpty();
    bool isFull();
    bool UnderFlow();
    void display();
};


#endif //DSA_LAB_CYCLE_STACK_H
