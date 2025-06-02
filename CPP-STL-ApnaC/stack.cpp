#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s,s2;
    // s and s2 are two empty stacks of integers
    deque<int> dq = {1, 2, 3};
    // A deque<int> called dq is initialized with 3 values.
    stack<int> s3(dq);  // ✅ correct way to init
    // Then s3 is constructed from the deque — this is allowed because stack can use deque as an underlying container.
    //Note: This initializes the stack such that s3.top() will be 3 (last element of dq).

    s.push(1);
    s.push(2);
    s.push(3);
    // Stack s now contains: top → 3, 2, 1
    s3.swap(s2);
    // Now s2 contains what s3 had (i.e., stack built from {1, 2, 3}), and s3 is now empty.

    while(!s.empty())
    {
        cout<<"Top : "<<s.top()<<endl; // Returns the top element
        s.pop();
        //	Removes the top element
    }
    cout<<endl;

    cout<<"Is S Empty : "<<s.empty();

    return 0;
}
