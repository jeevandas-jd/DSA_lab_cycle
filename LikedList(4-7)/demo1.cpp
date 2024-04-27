#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {
    LinkedList<int> list;
    int choice, element, index;

    do {
        cout << "\n-------------------------";
        cout << "\nLinked List Operations";
        cout << "\n-------------------------";
        cout << "\n1. Create Linked List";
        cout << "\n2. Display Linked List";
        cout << "\n3. Insert Element at End";
        cout << "\n4. Insert Element at Beginning";
        cout << "\n5. Insert Element at Position";
        cout << "\n6. Delete Element at End";
        cout << "\n7. Delete Element at Position";
        cout << "\n8. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.createLinkedList();
                break;
            case 2:
                cout << "Linked List: ";
                list.display();
                break;
            case 3:
                cout << "Enter element to insert at end: ";
                cin >> element;
                list.InsertEnd(element);
                break;
            case 4:
                cout << "Enter element to insert at beginning: ";
                cin >> element;
                list.InsertBeginning(element);
                break;
            case 5:
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position to insert at: ";
                cin >> index;
                list.InsertPosition(element, index);
                break;
            case 6:
                list.DeleteEnd();
                cout << "Element deleted from end." << endl;
                break;
            case 7:
                cout << "Enter position to delete: ";
                cin >> index;
                list.DeletePosition(index);
                cout << "Element deleted from position " << index << "." << endl;
                break;
            case 8:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 8.";
        }

    } while (choice != 8);

    return 0;
}
//
// Created by jeevandas on 31/3/24.
//
