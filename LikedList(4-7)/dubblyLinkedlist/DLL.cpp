//
// Created by jeevandas on 19/4/24.
//

#include "DLL.h"

template <class T>
Node<T>::Node(T data) {
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}
template <class T>
void DLL<T>::insertAtEnd(T data) {
    Node<T>* n=new Node(data);
    if(head==NULL){
        head=n;
    }
    else{
        Node<T>* temp=head;
        while(head->next!=NULL){
            temp=temp->next;
        }
        n->prev=temp;
        temp->next=n;

    }
}
template <class T>
void DLL<T>::insertAB(T data) {
    Node<T>* n=new Node(data);
    if(head==NULL){
        head=n;
    }
    else{
        head->prev=n;
        head=n;
    }
}
template <class T>
void DLL<T>::deleteAtPosition(int index) {
    Node<T>* temp=head;
    int i=0;
    while (i!=index){
        temp=temp->next;
        i=i+1;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}