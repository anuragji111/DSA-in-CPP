// Q18. Write a C++ program to implement a singly linked list that supports insertion at the end, insertion after a given value, and linear deletion (deleting a node by value). Demonstrate the operations with suitable examples.


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// Insert node at end
void insertAtEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Insert after a given value
void insertAfterValue(int value, int afterValue) {
    Node* temp = head;
    while (temp != nullptr && temp->data != afterValue) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Value " << afterValue << " not found." << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete a node by value (linear deletion)
void deleteValue(int value) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    // If head itself needs to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted value: " << value << endl;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Deleted value: " << value << endl;
}

// Display list
void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create initial linked list
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    cout << "Initial Linked List: ";
    display();

    insertAfterValue(25, 20);
    cout << "After inserting 25 after 20: ";
    display();

    deleteValue(30);
    cout << "After deleting 30: ";
    display();

    deleteValue(10);
    cout << "After deleting 10: ";
    display();

    deleteValue(100); // Not present
    display();

    return 0;
}
