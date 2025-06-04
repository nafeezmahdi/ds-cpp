#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    // Declare a multiset - stores elements in sorted order and allows duplicates
    unordered_set<int> s2;
    // Declare an unordered_set - stores unique elements in no order (hash-based)

    // Insert elements into the multiset
    s.insert(1);  // Insert 1
    s.insert(2);  // Insert 2
    s.insert(3);  // Insert 3
    s.insert(4);  // Insert 4
    s.emplace(5); // Insert 5 (same as insert, emplace is slightly more efficient for complex objects)
    s.insert(6);  // Insert 6
    s.insert(8);  // Insert 8
    s.insert(7);  // Insert 7
    s.insert(1);  // Insert duplicate 1 (multiset allows duplicates)

    // Insert elements into the unordered_set
    s2.insert(1);  // Insert 1
    s2.insert(2);  // Insert 2
    s2.emplace(5); // Insert 5
    s2.insert(4);  // Insert 4
    s2.insert(3);  // Insert 3
    // Note: Duplicate insertions like another `s2.insert(1)` would have no effect

    cout<<"S Size : "<<s.size()<<endl;
    // Print the size and elements of the multiset
    for(auto val : s)
    {
        cout<<val<<" ";
        // Output elements of the multiset (will be sorted, and duplicates shown)
    }
    cout<<endl;

    cout<<"S2 Size : "<<s2.size()<<endl;
    // Print the size and elements of the unordered_set
    for(auto val : s2)
    {
        cout<<val<<" ";
        // Output elements of the unordered_set (unordered, no duplicates)
    }
    cout<<endl;


    return 0;
}

// Use multiset when:
// You need sorted data
// You allow duplicate values
// Use unordered_set when:
// You need fast lookup/insert (O(1) on average)
// You don't care about order
// You want only unique elements
