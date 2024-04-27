//
// Created by jeevandas on 20/4/24.
//
#include "stack.cpp"
int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    stack<int> stk(size);

    char choice;
    int data;

    do {
        cout << "\nMenu:\n";
        cout << "a. Push\n";
        cout << "b. Pop\n";
        cout << "c. Display\n";
        cout << "d. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter data to push: ";
                cin >> data;
                stk.push(data);
                break;
            case 'b':
                stk.pop();
                break;
            case 'c':
                cout << "Stack elements: ";
                stk.display();
                break;
            case 'd':
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 'd');

    return 0;
}