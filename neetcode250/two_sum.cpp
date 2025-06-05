#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    vector<int> nums;

    cout<<"Enter N : ";
    cin>>n;
    cout << "Enter Nums : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter Target : ";
    cin>>t;

    cout<<"Nums : ";
    for(int val : nums)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j] == t)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }

    return 0;
}
