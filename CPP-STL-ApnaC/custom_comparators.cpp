#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Custom comparator function for sorting pairs.
// This comparator sorts:
// - First by the 'second' element of the pair in ascending order.
// - If two pairs have the same 'second' element, then by the 'first' element in ascending order.

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    // Compare second elements first
    if(p1.second < p2.second) return true; // p1 comes before p2
    if(p1.second > p2.second) return false; // // p1 comes after p2

    // If second elements are equal, compare first elements
    return p1.first < p2.first; // p1 comes before p2 if its first is smaller

}

int main()
{
    // Declare and initialize a vector of pairs with some values
    vector <pair <int, int>> vec = {{3,1}, {2,3}, {2,2}, {2,1}, {1,3}, {4,1}, {1,5}};
    // Create another copy of the vector to apply different sorting logic
    vector <pair <int, int>> vec2 = {{3,1}, {2,3}, {2,2}, {2,1}, {1,3}, {4,1}, {1,5}};


    sort(vec.begin(), vec.end());
    // Default sorting:
    // This sorts the vector of pairs using the default comparison for pairs:
    // - First by the 'first' element in ascending order.
    // - If 'first' elements are equal, then by 'second' element.
    sort(vec2.begin(), vec2.end(), comparator);
    // Custom sorting:
    // Uses the 'comparator' function defined earlier.
    // This sorts:
    // - First by 'second' element in ascending order.
    // - If equal, then by 'first' element.

    // Print results after default sorting
    cout<<"Vec Sort Pair Value : "<<endl;
    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    // Print results after custom comparator sorting
    cout<<"Vec Sort Pair By Second Value : "<<endl;
    for(auto p : vec2)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;
}
