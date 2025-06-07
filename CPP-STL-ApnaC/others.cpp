#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declare and initialize a vector with elements 1 to 5
    vector<int> vec =  {1, 2, 3, 4, 5};
    // Some integer and long variables
    int a=5, b=6;
    long int la = 6;
    long long lla = 6;
    // Two strings for permutation
    string s = "abc";
    string t = "bca";

    // Reverse the whole vector → vec becomes: {5, 4, 3, 2, 1}
    reverse(vec.begin(), vec.end());

    // Reverse the elements from index 1 to index 2 (inclusive) → affects only 3 and 4 → vec becomes: {5, 3, 4, 2, 1}
    reverse(vec.begin()+1, vec.begin()+3);

     // Print the updated vector
    cout<<"Full Reverse Vec After Reverse Index 1 & 3 : ";
    for(auto val : vec )
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // Find and print minimum and maximum element from the vector
    cout<<"Min Element of Vec : "<<*min_element(vec.begin(), vec.end())<< endl;
    cout<<"Max Element of Vec : "<<*max_element(vec.begin(), vec.end())<< endl;

    // Binary search on unsorted data (Note: This is unreliable unless the vector is sorted)
    cout<<"Binary Search 4 in Vec : "<<binary_search(vec.begin(), vec.end(), 4)<< endl;
    cout<<"Binary Search 10 in Vec : "<<binary_search(vec.begin(), vec.end(), 10)<< endl;

    // Find and print the next lexicographical permutation of string s → "abc" → "acb"
    cout<<"S : "<<s<< endl;
    next_permutation(s.begin(), s.end());
    cout<<"Next Permutation : "<<s<<endl;

     // Find and print the previous permutation of string t → "bca" → "bac"
    cout<<"T : "<<t<< endl;
    prev_permutation(t.begin(), t.end());
    cout<<"Prev Permutation : "<<s<<endl;

    cout<<"Max of 4,5 : "<<max(4, 5)<<endl;
    cout<<"Min of 4,5 : "<<min(4, 5)<<endl;

    swap(a, b);
    cout<<"After Swapping a=5 & b=6 : "<<a<<" "<<b<<endl;

    cout<<"Built in Count of a : "<<__builtin_popcount(a)<<endl;
    cout<<"Built in Count of long a : "<<__builtin_popcountl(la)<<endl;
    cout<<"Built in Count of long long a : "<<__builtin_popcount(lla)<<endl;

    return 0;
}
