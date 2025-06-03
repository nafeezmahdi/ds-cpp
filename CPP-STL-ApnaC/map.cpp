#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// C++ STL map container, which stores key-value pairs with keys in sorted order and provides fast lookup.

int main()
{
    map<string, int> m;
    // Create a map with key: string, value: int

    m["tv"] = 100; // Insert key "tv" with value 100
    m["laptop"] = 120; // Insert key "laptop" with value 120
    m["headphones"] = 20;
    m["tablet"] = 50;
    m["watch"] = 40;

    m.insert({"camera", 25}); // Insert using insert() with a pair
    m.emplace("phone", 200); // Insert using emplace (constructs in-place)
    // operator[] inserts if the key does not exist.
    // insert() inserts a pair but does not overwrite if key exists.
    // emplace() constructs the pair in-place (efficient).

    m.erase("tv"); // Remove the element with key "tv"


    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
        // Iterates over the map in sorted order of keys (lexicographically for strings).
        // Prints each key-value pair.
    }

    cout<<"Laptop Count : "<<m.count("laptop")<<endl; // Returns 1 if key exists, else 0
    // count() tells if a key exists.
    cout<<"Laptop Value : "<<m["laptop"]<<endl; // Access value by key
    // operator[] accesses value by key; if key not present, inserts it with default value (0 here)

    // When you use find() on a C++ map, it returns an iterator. If the key is found, this iterator points to the element (a key-value pair). If not, it returns m.end(),
    if(m.find("camera") != m.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    // find() returns an iterator to the element if found; otherwise m.end()
    // Used to check existence without inserting new elements (unlike operator[])

    return 0;
}
