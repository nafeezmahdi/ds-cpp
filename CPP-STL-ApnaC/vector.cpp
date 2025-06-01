#include<iostream>
#include<bits/stdc++.h>
//#include<vector>
using namespace std;

int main()
{
    // 1. Create different types of vectors
    vector<int> vec; // Empty vector
    vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Initialized with list
    vector<int> vec3(10, 20); // 10 elements all set to 20
    vector<int> vec4(vec2); // Copy constructor
    // Later changes to vec2 do not affect vec4.
    // This is because std::vector uses a deep copy, meaning:
    // A new internal array is created for vec4.
    // It does not share memory with vec.
    // Modifying vec does not change vec4.

    // Use push_back and emplace_back to insert elements at the end of vec
    vec.push_back(1); // Capacity 1
    vec.push_back(3); // 2
    vec.push_back(1); // 4
    vec.push_back(6); // 4
    vec.push_back(5); // 8
    vec.emplace_back(6); //8
    // When size exceeds capacity, capacity is doubled or grown, often as:
    // 1 → 2 → 4 → 8 → 16 → ...
    vec.pop_back(); // Removes last element

    // Display Vector 1
    cout<<endl<<"Vector 1 : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // Accessing elements
    cout<<"Val at idx 2 : "<<vec[2]<<" or "<<vec.at(2)<<endl;
    cout<<"Front : "<<vec.front()<<endl;
    cout<<"Back : "<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    // Print Vector 2
    cout<<endl<<"Vector 2 : ";
    for(int val : vec2)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // Print Vector 3
    cout<<endl<<"Vector 3 : ";
    for(int val : vec3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // Print Vector 4 (initial copy of vec2)
    cout<<endl<<"Vector 4 : ";
    for(int val : vec4)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // Modifying vec4 using erase
    vec4.erase(vec4.begin()); // Remove first element
    vec4.erase(vec4.begin()+2); // Remove 3rd element (0-based indexing)
    vec4.erase(vec4.begin()+1, vec4.begin()+3); // Remove 2nd to 3rd elements (inclusive-exclusive)
    // erase change vector size, not capacity

    // Insert new value at the beginning
    vec4.insert(vec4.begin(), 43); // Insert 43 at the front
    // Clear all elements (capacity remains unchanged)
    vec4.clear();
    // clear delete all element but capacity remain same

    // Check if vec4 is empty
    cout<<"Is Vector 4 Empty : "<<vec4.empty()<<endl;

    return 0;
}
