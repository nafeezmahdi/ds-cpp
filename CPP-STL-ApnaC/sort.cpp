#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6] = {3, 2, 5, 1, 8, 6};
    // Declare and initialize an array of 6 integers
    vector<int> vec = {3, 25, 11, 18, 62, 25};
    vector<int> vec2 = {3, 25, 11, 18, 62, 25};
    // Declare and initialize two vectors with 6 elements each

    sort(ara, ara+6);
    // Sort the array in ascending order using the C-style sort
    // sort(startPointer, endPointer) sorts from ara[0] to ara[5]

    sort(vec.begin(), vec.end());
    // Sort the first vector in ascending order using default comparator
    // sort(beginIterator, endIterator)

    sort(vec2.begin(), vec2.end(), greater<int>());
    // Sort the second vector in **descending order** using greater<int>()
    // greater<int>() is a standard function object that defines ">"

    cout<<"Ara Value : ";
    for(int val : ara){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Vec Value : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Vec2 Descending Value : ";
    for(int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
