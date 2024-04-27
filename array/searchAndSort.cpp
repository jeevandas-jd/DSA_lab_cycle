#include <cmath>
//#include "Array.h"
#include "Array.cpp"

template <class T>
void Array<T>::binarySearch(T element) {
    int low,high;
    low=0;
    high=UB;
    bool found= false;
    int mid;
    while(low<=high&& found== false){
        mid=((low+high)/2);
        mid=static_cast<int>(floor(mid));
        T mid_val=arr[mid];
        if(mid_val==element){
            cout<<"element found at the index "<<mid<<endl;
            found = true;
        }
        if (found== false){
            cout<<"element not found"<<endl;
        }
}
}
template <class T>
void Array<T>::linearSearch(T element)  {
    bool found= false;
    int i=0;
    while(i<UB && found== false){
        if (arr[i]==element){
            cout<<"item found at the index of "<<i<<endl;
            found= true;
        }
        i=i+1;
    }
    if(found== true){
        cout<<"item not found"<<endl;
    }

}
//sort//
template <class T>
void Array<T>::quickSort(int low,int high) {
    if (low < high) {
        int pivotIndex = partition(low, high);
        quickSort(low, pivotIndex - 1);
        quickSort(pivotIndex + 1, high);
    }
}
template <class T>
int Array<T>::partition(int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
template <class T>
void Array<T>::boubbleSort() {
    for(int i=LB;i<UB;i++){
        for(int j=LB;j<=UB-i;j++){
            if (arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
template <class T>
void Array<T>::insertionSort() {
    for(int i=LB+1;i<=UB;i++){
        T key=arr[i];
        int k=i-1;
        while (k>=0 && arr[k]>key){
            arr[k+1]=arr[k];
            k=k-1;
        }
        arr[k+1]=key;
    }

}
template <class T>
void Array<T>::mergeSort(int low, int high)  {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);

        merge(low, mid, high);
    }

}
template <class T>
void Array<T>::merge(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    T L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
template <class T>
void Array<T>::selectionSort() {
    for(int i=LB;i<UB;i++){
        int min=i;
        for(int j=i+1;j<UB;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if (min!=i){
            T a=arr[i];
            arr[i]=arr[min];
            arr[min]=a;
        }
    }

}


