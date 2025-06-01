#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {11, 22, 33};

    d.push_back(1);
    d.push_back(2);
    d.emplace_back(4);
    d.push_front(3);
    d.push_front(5);


    cout<<"Deque : ";
    for(int val : d)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    d.pop_back();  // removes 4
    d.pop_front(); // removes 5
    cout<<"Deque After Pop Back N Front : ";
    for(int val : d)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<d[2]<<endl;
    // ✅ Why does d[2] work?
    // std::deque is like a dynamic array with efficient insertion at both ends.
    // It supports random access, so d[2] returns the third element (22).

    return 0;
}

