
#include "searchAndSort.cpp"
template <class T>
void Array<T>::LeftRotate(int key) {
    Array <T> A2;
    int n=UB;
    for(int i=0;i<n;i++){
        A2.insertAtEnd(0);
    }
    for(int i=0;i<=n;i++){
        int new_index=(i-key+n)%n;
        A2.arr[new_index]=arr[i];

    }
    for(int i=0;i<n;i++){
        arr[i]=A2.arr[i];
    }
}


template <class T>
void Array<T>::rightRotate(int key) {
    Array <T> A1;
    int n=UB-LB;
    for(int i=0;i<n;i++){
        A1.insertAtEnd(0);
    }
    for(int i=0;i<=n;i++){
        if(i+key<=n){
            A1.arr[i+key]=arr[i];
        }
        else if(i+key>n){
            A1.arr[(i+key)-n]=arr[i];
        }
    }
    for(int i=0;i<=n;i++){
        arr[i]=A1.arr[i];
    }
}

template <class T>
void Array<T>::frquencyCount() {
    quickSort(LB, UB - 1);
    int count = 1;
    for (int i = LB + 1; i <= UB; i++) {
        if (i < UB && arr[i] == arr[i - 1]) {
            count++;
        } else {
            cout << arr[i - 1] << " : " << count << endl;
            count = 1;
        }
    }

}
template <class T>
void Array<T>::distinct() {

}
