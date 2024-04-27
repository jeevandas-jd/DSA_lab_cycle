#include "Array.h"

template <class T>
Array<T>::Array(int a, int b) {
    UB=a;
    LB=b;
}
template <class T>
Array<T>::Array() {
    LB=1;
    UB=0;

}
template <class T>
Array<T>::Array(T A[],int len) {
    LB=1;
    UB=0;
    for(int i=0;i<len;i++){
        insertAtEnd(A[i]);
    }


}
template <class T>
void Array<T>::insertAtBegining(T element) {
    UB=UB+1;
    int k=UB-1;
    while (k>=LB){
        arr[k+1]=arr[k];
        k=k-1;
    }
    arr[LB]=element;
}
template <class T>
void Array<T>::insertAtEnd(T element) {
    UB=UB+1;
    arr[UB]=element;
}
template <class T>
void Array<T>::insertionAtPosition(T element, int index) {
    UB=UB+1;
    int k=UB-1;
    while (k<=index){
        arr[k+1]=arr[k];
        k=k-1;
    }
    arr[index]=element;
}

template <class T>
void Array<T>::Display() {
    for(int i=LB;i<=UB;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
}
template <class T>
void Array<T>::DeletionFromBegning() {
    LB=LB+1;
}
template <class T>
void Array<T>::DeletionFromEnd() {
    UB=UB-1;
}
template <class T>
void Array<T>::DeleteFromIndex(int index) {
    UB=UB-1;
    for(int i=0;i<UB;i++){
        arr[index+i]=arr[index+i+1];
    }

}
template <class T>
void Array<T>::FindElement(T element) {
    bool con= false;
    for(int i=LB;i<UB;i++){
        if(arr[i]==element){
            cout<<"element found at "<<i<<"th position "<<endl;
            con= true;
        }
    }
    if(con== false){
        cout<<"element not found "<<endl;
    }
}

