

#include "question3.cpp"

using namespace std;

int main(){
    Array<int> INTA;
    int el;
    for(int i=0;i<6;i++){
        cout<<"enter a element\n>>";
        cin>>el;
        INTA.insertAtEnd(el);
    }

    INTA.frquencyCount();


}