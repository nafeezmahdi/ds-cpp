#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    unordered_set<int> s2;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.emplace(5);
    s.insert(6);
    s.insert(8);
    s.insert(7);
    s.insert(1);

    s2.insert(1);
    s2.insert(2);
    s2.emplace(5);
    s2.insert(4);
    s2.insert(3);

    cout<<"S Size : "<<s.size()<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"S2 Size : "<<s2.size()<<endl;
    for(auto val : s2)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    return 0;
}
