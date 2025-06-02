#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // Creates an empty queue of integers.
    deque<int> dq = {1, 2, 3};
    queue<int> q2(dq);
    // dq is a deque initialized with {1, 2, 3}
    // q2 is initialized with dq, which works because queue uses deque as its underlying container by default.
    // Now q2.front() is 1, and q2.back() is 3.
    // ✅ queue<int> q2(dq); is valid because std::queue can be initialized from a deque with matching type.

    q.push(1);
    q.push(2);
    q.push(3);
    // Queue q now contains: front → 1, 2, 3 ← back

    while(!q.empty())
    {
        cout<<"Top : "<<q.front()<<endl; // Returns the front element
        q.pop(); // Removes the front element
    }
    // This loop prints the front element of q and removes it.
    cout<<endl;

    cout<<"Is Q Empty : "<<q.empty();

    return 0;

}
