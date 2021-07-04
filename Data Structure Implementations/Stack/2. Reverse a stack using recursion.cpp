/*
Reverse a stack without any loops or extra space (call stack excluded). This is achieved using recursion. We make two functions - 

1. void insertAtBottom( stack <int> st, int ele): First pops all stack items and stores the popped item in function call stack using recursion. And when stack
becomes empty, pushes new item and all items stored in call stack.

2. void reverse(stack <int> st): This function first removes the topmost item, reverses the leftover stack and then inserts the removed element at bottom of stack.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void insertAtBottom(stack <int>& st,int ele){               // This function is tricky. Take a pen and follow the recursion. This function basically empties the 
    if(st.empty()){                                         // entire stack first, then pushes the desired element and then again pushes the removed elements.
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reverse(stack <int>& st){
    if (st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}

int main(){
    stack <int> st;
    for(int i = 1; i < 6; i++){         // stack = {5,4,3,2,1} , left side is top
        st.push(i);
    }
    reverse(st);
    for(int i = 0; i < 5; i++){
        int a = st.top();
        st.pop();
        cout << a << " ";
    }
}

/*
Output of main - 

1 2 3 4 5 
*/




