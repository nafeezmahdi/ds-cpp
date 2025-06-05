#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string ans;
    vector<string> str;

    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter Str : ";
    for (int i = 0; i < n; i++)
    {
        string val;
        cin>>val;
        str.push_back(val);
    }

    cout<<"Str : ";
    for(string val : str)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    for(int i=1; i<n; i++){

    }

    return 0;
}
