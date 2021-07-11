#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000

class Queue{
    int *arr;        // private member variables
    int front;
    int back;

public:
    Queue(){
        arr = new int[N];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == N-1){
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1) front++;
    }

    void pop(){
        if(front == -1 || back < front){
            cout << "Empty Queue" << endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front == -1 || back < front){
            cout << "Empty queue" << endl;
            return -1;                             // Just because return type is an integer
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1 || back  < front){
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
