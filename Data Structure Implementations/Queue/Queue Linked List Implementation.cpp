#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000

class node{
public:
    int val;
    node* next;

    node(int va){
        val = va;
        next = NULL;
    }
};

class Queue{
    node* front;
    node* back;

public:
    Queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);
        if(front == NULL){
            front = n;
            back = n;
            return;
        }
        back -> next = n;
        back = n;
    }

    void pop(){
        if(front == NULL){
            cout << "Queue Empty" << endl;
            return;
        }

        node* todelete = front;
        front = front -> next;
        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout << "Empty queue" << endl;
            return -1;
        }

        return front -> val;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Queue q;
    cout << q.peek() << endl;

    q.push(1);
    q.push(2);
    q.push(5);
    q.push(7);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    cout << q.empty() << endl;
}

/*
Output of above main function

Empty queue
-1
1
2
5
0
*/
