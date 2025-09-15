// Q.18: Write a program in C++ to insert a node at the beginning of a singly linked list 
// and display the linked list after insertion.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* head = NULL;

// Function to insert a node at the beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    cout << "Linked List after insertion at beginning: ";
    display();

    return 0;
}
