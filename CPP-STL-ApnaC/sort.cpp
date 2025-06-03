#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6] = {3, 2, 5, 1, 8, 6};
    vector<int> vec = {3, 25, 11, 18, 62, 25};
    vector<int> vec2 = {3, 25, 11, 18, 62, 25};

    sort(ara, ara+6);
    sort(vec.begin(), vec.end());
    sort(vec2.begin(), vec2.end(), greater<int>());

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
