#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    // Creates a max-heap priority queue (pq) that always gives the largest element on top by default.
    priority_queue<int, vector<int>, greater<int> > rpq;
    // Creates a min-heap priority queue (rpq) by using the greater<int> comparator.
    // This means the smallest element will be on top.

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(4);
    // Inserts elements into the max-heap pq

    rpq.push(5);
    rpq.push(2);
    rpq.push(10);
    rpq.push(4);
    rpq.push(22);
    // Inserts elements into the min-heap rpq

    cout<<"PQ : ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" "; // Access max element
        pq.pop();
    }
    cout<<endl;
    // Prints elements in descending order because max element is popped first.

    cout<<"RPQ : ";
    while(!rpq.empty())
    {
        cout<<rpq.top()<<" "; // Access min element
        rpq.pop();
    }
    cout<<endl;
    // Prints elements in ascending order because min element is popped first.

    return 0;
}

