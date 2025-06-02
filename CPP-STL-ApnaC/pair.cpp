#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 5};
    // Creates a pair of two integers.
    pair<string, int> p2 = {"Mah", 11};
    // A pair containing a string and an int.
    pair<int, pair<char, int>> p3 = {22, {'M', 11}};
    // Nested Pair - A pair where the second element is another pair.
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}};
    //  Vector of Pairs - Initializes a vector with two pairs: (1, 2) and (2, 3)

    vec.push_back({4, 5});     // Adds (4, 5)
    vec.emplace_back(5, 6);    // Adds (5, 6), slightly more efficient than push_back



    cout<<"P : "<<p.first<<" "<<p.second<<endl;
    cout<<"P2 : "<<p2.first<<" "<<p2.second<<endl;
    cout<<"P3 : "<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    cout<<"Vec : ";
    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;

    // ✅ Best Practices
    // Use emplace_back() over push_back() when constructing the pair in place (slightly faster).
    // Use auto in loops: for (auto p : vec) for brevity and readability.

    return 0;
}
