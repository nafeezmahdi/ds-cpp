#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.emplace(5);
    s.insert(6);
    s.insert(8);
    s.insert(7);
    s.insert(1);

    cout<<"S Size : "<<s.size()<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    return 0;
}
