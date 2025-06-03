#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Stores key-value pairs like map.
// Allows duplicate keys — multiple elements can have the same key.
// Elements are stored in sorted order by key.
// Lookup, insert, and erase operations work similarly to map, but affect all or one of the duplicates.

int main()
{
    multimap<string, int> m;
    // Creates an empty multimap with keys of type string and values of type int.

    m.insert({"camera", 25}); // Insert using insert() with a pair
    m.emplace("camera", 200);
    m.emplace("camera", 200);
    m.emplace("phone", 20); // Insert using emplace (constructs in-place)
    m.insert({"phone", 200});
    m.insert({"phone", 20});
    // Inserts several pairs.
    // Note: camera and phone keys appear multiple times, with different or same values.
    // All duplicates are stored.

    m.erase(m.find("phone"));
    // m.find("phone") returns an iterator to the first element with key "phone".
    // erase(iterator) removes only that element, not all "phone" elements.

    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
        // Prints all key-value pairs.
        // Because it's a multimap, you see all duplicates.
        // The order is sorted by key.
    }

    m.erase("phone");
    // Erases all elements with key "phone" at once.
    // After this, "phone" elements are removed from the multimap entirely.

    return 0;
}

