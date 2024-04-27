//
// Created by jeevandas on 31/3/24.
//

#ifndef DSA_LAB_CYCLE_LINKEDLIST_H
#define DSA_LAB_CYCLE_LINKEDLIST_H

#endif //DSA_LAB_CYCLE_LINKEDLIST_H
#include <iostream>

using namespace std;
template <class T>
class Node{
    T data;
    Node* link;
public:
    Node();
    Node(T data);
    void setData(T data);
    T getData();
    void setLink(Node* link);
    Node* getLink();

};

template <class T>
class LinkedList{
    Node<T>* head;
public:
    LinkedList();
    Node<T>* getHead();
    void createLinkedList();
    void display();
    void InsertEnd(T element);
    void InsertBeginning(T element);
    void InsertPosition (T element,int idex);
    void DeleteEnd();
    void DeletePosition(int index);
};