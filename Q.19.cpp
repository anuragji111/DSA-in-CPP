// Q.19: Write a program in C++ to insert a node at the end of a singly linked list and display the linked list after insertion.

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

// Function to insert a node at the end
void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode; // First node becomes head
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
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
    // Insert elements at the end
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    cout << "Linked List after insertion at end: ";
    display();

    return 0;
}
