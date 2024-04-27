#include<iostream>
#include<ostream>

using namespace std;
template <class T>
class Array{
    int UB,LB;
public:
    T arr[100];
    Array();
    Array(int,int);
    Array(T[],int len);
    void insertAtBegining(T element);
    void insertAtEnd(T element);
    void insertionAtPosition(T element,int index);
    void DeletionFromBegning();
    void DeletionFromEnd();
    void DeleteFromIndex(int index);
    void FindElement(T element);
    void Display();
    //sort
    void quickSort(int low, int high);
    void boubbleSort();
    void merge(int low, int mid, int high);
    void insertionSort();
    void mergeSort(int low, int high);
    void selectionSort();
    int partition(int low, int high);
    //search
    void linearSearch(T element);
    void binarySearch(T element);
    //question3
    void LeftRotate(int key);
    void rightRotate(int key);
    void frquencyCount();
    void distinct();


};