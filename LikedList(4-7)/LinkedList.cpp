//
// Created by jeevandas on 31/3/24.
//
#include "LinkedList.h"

template <class T>
Node<T>::Node(T data) {
    this->data=data;
    this->link= nullptr;
}
template <class T>
Node<T>::Node() {
    this->data=0;
    this->link= nullptr;
}
template <class T>
T Node<T>::getData() {
    return data;
}
template <class T>
void Node<T>::setData(T data) {
    this->data=data;
}
template <class T>
void Node<T>::setLink(Node<T> *link) {
    this->link=link;
}
template <class T>
Node<T>* Node<T>::getLink() {
    return link;
}
//LinkedList

template<class T>
LinkedList<T>::LinkedList(){
    head=new Node<T>();
}
template < class T>
Node<T>* LinkedList<T>::getHead() {
    return head;
}
template <class T>
void LinkedList<T>::createLinkedList() {
    Node<T>* current=head;
    int x;
    T data;
    cout<<"enter number of elements\n>>>";
    cin>>x;
    for (int i = 0; i < x; ++i) {
        cout<<"enter data\n>>>";
        cin>>data;
        Node<T>* node=new Node<T>(data);
        current->setLink(node);
        current=node;
    }
}
template <class T>
void LinkedList<T>::display() {
    Node<T>* current=head->getLink();
    while (current!= nullptr){
        cout<<current->getData()<<" ";
        current=current->getLink();
    }
}

template <class T>
void LinkedList<T>::InsertBeginning(T element) {
    Node<T>* newNode=new Node<T>();
    newNode->setData(element);
    newNode->setLink(head->getLink());
    head->setLink(newNode);
}
template <class T>
void LinkedList<T>::InsertPosition(T element, int index) {
    if (index < 0) {
        std::cerr << "Invalid index." << std::endl;
        return;
    }
    Node<T>* newNode = new Node<T>(element);
    Node<T>* current = head;
    for (int i = 0; i < index && current->getLink() != nullptr; ++i) {
        current = current->getLink();
    }
    newNode->setLink(current->getLink());
    current->setLink(newNode);
}
template <class T>
void LinkedList<T>::InsertEnd(T element) {
    Node<T>* newNode = new Node<T>(element);
    Node<T>* current = head;
    while (current->getLink() != nullptr) {
        current = current->getLink();
    }
    current->setLink(newNode);
}

template <class T>
void LinkedList<T>::DeleteEnd() {
    Node<T>* current = head;
    Node<T>* previous = nullptr;
    while (current->getLink() != nullptr) {
        previous = current;
        current = current->getLink();
    }
    if (previous != nullptr) {
        previous->setLink(nullptr);
        delete current;
    }
}

template <class T>
void LinkedList<T>::DeletePosition(int index) {
    if (index < 0) {
        std::cerr << "Invalid index." << std::endl;
        return;
    }
    Node<T>* current = head;
    Node<T>* previous = nullptr;
    for (int i = 0; i < index && current->getLink() != nullptr; ++i) {
        previous = current;
        current = current->getLink();
    }
    if (current != head) {
        previous->setLink(current->getLink());
        delete current;
    }
}