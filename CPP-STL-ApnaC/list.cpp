#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {11, 22, 33};

    l.push_back(1);     // Add at end
    l.push_back(2);     // Add at end
    l.emplace_back(4);  // Add at end (more efficient than push_back)
    l.push_front(3);    // Add at beginning
    l.push_front(5);    // Add at beginning


    cout<<"List : ";
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    l.pop_back();  // Removes 4
    l.pop_front(); // Removes 5
    cout<<"List After Pop Back N Front : ";
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // cout<<l[2]<<endl;
    // Why does l[2] not work?
    // std::list is a doubly linked list — it does not provide random access.
    // So l[2] gives a compile-time error: list has no operator[].
    // You must use an iterator to access by position:

    auto it = l.begin();
    advance(it, 2);  // Move to the 3rd element (0-based)
    cout << *it << endl; // prints 22

    return 0;
}
