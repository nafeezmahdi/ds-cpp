#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    // Declare a set of integers
    // 'set' stores only unique elements in **sorted order**

    // Insert elements into the set
    s.insert(1);  // Insert 1
    s.insert(2);  // Insert 2
    s.insert(3);  // Insert 3
    s.insert(4);  // Insert 4
    s.emplace(5); // Insert 5 using emplace (same as insert for primitives)
    s.insert(6);  // Insert 6
    s.insert(8);  // Insert 8
    s.insert(7);  // Insert 7
    s.insert(1);  // Try inserting 1 again - ignored (set doesn't allow duplicates

    cout<<"S Size : "<<s.size()<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    // Print all elements in the set
    // The output will be in sorted order and without duplicates
    }
    cout<<endl;


    return 0;
}
