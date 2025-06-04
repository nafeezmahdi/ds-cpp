#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    // Declare an ordered set of integers.
    // std::set stores unique elements in sorted (ascending) order by default.

    // Inserting elements into the set
    s.insert(1);   // Insert 1
    s.insert(2);   // Insert 2
    s.insert(3);   // Insert 3
    s.insert(4);   // Insert 4
    s.emplace(5);  // emplace() is similar to insert(), slightly more efficient for objects
    s.insert(8);   // Insert 8
    s.insert(7);   // Insert 7
    // Now the set contains: {1, 2, 3, 4, 5, 7, 8} (automatically sorted and unique)

    // lower_bound(x): returns an iterator pointing to the **first element that is >= x**
    cout<<"Lower Bound 4 : "<<*(s.lower_bound(4))<<endl; // 4 exists → returns 4
    cout<<"Lower Bound 6 : "<<*(s.lower_bound(6))<<endl; // 6 doesn't exist → returns 7 (first element >= 6)
    cout<<"Lower Bound 10 : "<<*(s.lower_bound(10))<<endl;
    // There is no element ≥ 10 in the set.
    // So s.lower_bound(10) returns s.end(), which is an invalid iterator to dereference.

    // upper_bound(x): returns an iterator pointing to the **first element that is > x**
    cout<<"Upper Bound 5 : "<<*(s.upper_bound(5))<<endl; // First element > 5 → 7
    cout<<"Upper Bound 10 : "<<*(s.upper_bound(10))<<endl;
    // There is no element ≥ 10 in the set.
    // So s.lower_bound(10) returns s.end(), which is an invalid iterator to dereference.

    cout<<"S Size : "<<s.size()<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
