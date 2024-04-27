//
// Created by jeevandas on 20/4/24.
//

#include "stack.h"
template <class T>
void stack<T>::push(int data) {
    bool c;
    c=isFull();
    if(c== false){
         top=top+1;
         a[top]=data;
    }
    else{
        cout<<"stack overflow!!"<<endl;
    }
}
template <class T>
stack<T>::stack(int size) {
    this->top=-1;
    this->size=size;
}
template <class T>
bool stack<T>::isFull() {
    if(top==size-1){
        return true;
    }
    else{
        return false;
    }
}
template <class T>
bool stack<T>::isEmpty() {
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
template <class T>
void stack<T>::pop() {
    bool c;
    c=isEmpty();
    if(c== false){
        top=top-1;

    }
    else{
        cout<<"stack under flow!!"<<endl;
    }
}
template <class T>
void stack<T>::display() {
    if(not isEmpty()){
        for(int i=0;i<=top;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
//template <class T>;


