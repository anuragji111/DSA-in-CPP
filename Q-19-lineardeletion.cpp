#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

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

void insertaftervalue(int value, int aftervalue) {
    Node* temp = head;
    while (temp != nullptr && temp->data != aftervalue) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Value " << aftervalue << " not found" << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, value, aftervalue, newValue, target;

    cout << "Enter the number of elements to insert: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout<<"enter value for node"<<i+1<<":";
        cin>>value;
        insertAtEnd(value);
    }
    cout<<"linked list before insertion: ";
    display();
    cout<<"Enter the value after which to insert: ";
    cin>>aftervalue;
    cout<<"Enter the new value to insert:";
    cin>>newValue;
    insertaftervalue(newValue, target);
    cout<<"linked list after insertion:";
    display();
    return 0;
}