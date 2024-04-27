#include <iostream>
#include "Array.cpp" // Include the header file where Array class is declared

using namespace std;

int main() {
    Array<int> intArray;
    int choice, element, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insertion at Beginning\n";
        cout << "2. Insertion at End\n";
        cout << "3. Insertion at a specified position\n";
        cout << "4. Display\n";
        cout << "5. Exit\n6.deletion at end\n7.deletion at begning\n8.deletion from index\n9.check element ";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to insert at the beginning: ";
                cin >> element;
                intArray.insertAtBegining(element);
                break;
            case 2:
                cout << "Enter element to insert at the end: ";
                cin >> element;
                intArray.insertAtEnd(element);
                break;
            case 3:
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position to insert: ";
                cin >> position;
                intArray.insertionAtPosition(element, position);
                break;
            case 4:
                intArray.Display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            case 6:
                intArray.DeletionFromEnd();
                break;
            case 7:
                intArray.DeletionFromBegning();
                break;
            case 8:
                cout<<"index please\n>>>";
                cin>>element;
                intArray.DeleteFromIndex(element);
            case 9:
                cout<<"which elemet do you want to check\n";
                cin>>element;
                intArray.FindElement(element);
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 5);

    return 0;
}
