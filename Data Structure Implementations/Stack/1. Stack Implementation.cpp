/*
Stack works on Last in First Out (LIFO) principle. We will implement stack using array here. O(1) Operations required are - 

1. push(x) - pushes the element x at the top of the stack.
2. pop() - removes the topmost element.
3. top() - return the value of topmost element.
4. empty() - returns whether stack is empty.

We will first create an array with some maximum size and initialise a variable Top = -1 at the constructor call.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000

class Stack{
    int top;
    int arr[N];
    
public:
    Stack(){                                                 // Constructor call - Initialise top to -1.
        top = -1;
    }

    void push(int x){
        if(top == N-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
  
    void pop(){
        if(top == -1){
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout << "No element in stack" << endl;
            return INT_MIN;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};



int main(){
    Stack s;
    s.push(2);
    s.push(4);
    s.push(5);
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    cout << s.empty() << endl;
    s.pop();
    s.pop();
    cout << s.Top() << endl;
    cout << s.empty() << endl;
    s.pop();
    for(int i = 0;i <1000; i++){
        s.push(i);
    }
    s.push(5);
}

/*
Output of above main function

5
4
0
No element in stack
-2147483648
1
No element to pop
Stack Overflow

*/
