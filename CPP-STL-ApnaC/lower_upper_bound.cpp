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
    s.insert(8);
    s.insert(7);

    cout<<"Lower Bound 4 : "<<*(s.lower_bound(4))<<endl;
    cout<<"Lower Bound 6 : "<<*(s.lower_bound(6))<<endl;
    cout<<"Lower Bound 10 : "<<*(s.lower_bound(10))<<endl;
    cout<<"Upper Bound 5 : "<<*(s.upper_bound(5))<<endl;
    cout<<"Upper Bound 10 : "<<*(s.upper_bound(10))<<endl;

    cout<<"S Size : "<<s.size()<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
