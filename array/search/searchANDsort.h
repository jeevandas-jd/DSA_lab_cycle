#include <iostream>
using namespace std;
template <class T>
class SearchAndSort{
    void insert();
public:
    int UB,LB;
    T a[100];
    SearchAndSort();
    SearchAndSort(T a[]);

    void QuickSort();
    void BoubbleSort();
    void InsertinSort();
    void MergeSort();
    void selectionSort();
    //search
    void LinearSearch(T element);
    void BinarySearch(T element);
};