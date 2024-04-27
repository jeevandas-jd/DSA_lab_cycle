#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node<T>* next;
    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};

template <class T>
class LinkedList {
public:
    Node<T>* head = NULL;

    void insertAtEnd(T data) {
        Node<T>* n = new Node<T>(data);
        if (head == NULL) {
            head = n;
        } else {
            Node<T>* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void deleteEnd() {
        if (head == NULL) {
            return; // Nothing to delete
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node<T>* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }

    int size() {
        Node<T>* temp = head;
        int i = 0;
        while (temp != NULL) {
            i++;
            temp = temp->next;
        }
        return i;
    }

    void display() {
        Node<T>* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

