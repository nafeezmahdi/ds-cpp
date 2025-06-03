#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// unordered_map in C++, which stores key-value pairs but does not maintain any order (unlike map or multimap), and does not allow duplicate keys (unlike multimap)
// Hash table based container — offers average O(1) complexity for insert, find, and erase.
// Stores unique keys only — inserting a key that already exists does not create duplicates.
// No sorting or ordering guarantee — elements come out in arbitrary order.

int main()
{
    unordered_map<string, int> m;
    // Creates an empty unordered map with string keys and int values.

    m.insert({"camera", 25});
    m.emplace("camera", 200);
    m.emplace("phone", 20);
    m.insert({"phone", 25});
    m.emplace("tab", 30);
    // insert and emplace both add key-value pairs.
    // Since keys must be unique in unordered_map, the second insertion/emplacement of "camera" and "phone" will fail to insert or not update the existing entry.
    // So after these operations:
    // "camera" will have value 25 (first insertion).
    // "phone" will have value 20 (from first emplacement).
    // "tab" will have value 30.

    // If you want to update a key's value, use:
    m["camera"] = 200; // Updates existing "camera" value to 200

     for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
        // Iterates over all key-value pairs in arbitrary order.
        // Prints keys and their corresponding values.
        // Duplicate keys are not printed multiple times because unordered_map does not allow duplicates.
    }


    return 0;
}
