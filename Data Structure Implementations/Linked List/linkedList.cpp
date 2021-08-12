#include<bits/stdc++.h>
using namespace std;

// Singly Linked List Implementation

class Node{          // Each node consists of a value and a pointer to node class
public:
    int val;
    Node* next;
};

// Let us create a linked list with 3 nodes.

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // 3 nodes have been randomly allocated in heap and we have pointers to those nodes
    // as head, second and third

    head -> val = 1;
    head -> next = second;

    second -> val = 2;
    second -> next = third;

    third -> val = 3;
    third -> next = NULL;

    // Here, the linked list has been created and we can access it using head pointer.

    // Traversing the linked list

    Node* n;
    n = head;
    while(n != NULL){
        cout << n -> val << endl;
        n = n -> next;
    }
}

