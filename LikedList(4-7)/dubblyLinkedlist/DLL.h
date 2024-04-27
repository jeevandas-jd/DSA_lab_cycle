//
// Created by jeevandas on 19/4/24.
//

#ifndef DSA_LAB_CYCLE_DLL_H
#define DSA_LAB_CYCLE_DLL_H

#endif //DSA_LAB_CYCLE_DLL_H
#include <iostream>
using namespace std;
template <class T>
class Node{
public:
    T data;
    Node* next;
    Node* prev;
    Node(T data);
};
template <class T>
class DLL{
public:
    Node<T>* head;
    void insertAB(T data);
    void insertAtEnd(T data);
    void insertAtPosition(int index);
    void deleteAB();
    void deleteAtEnd();
    void deleteAtPosition(int index);
};
