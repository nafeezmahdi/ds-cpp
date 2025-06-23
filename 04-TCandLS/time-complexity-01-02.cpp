#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  Time Complexity : O(n + n) = O(2*n) = O(c*n) = O(n)
  Memory Complexity : O(1 + n) = O(n)
*/

int main()
{
    int n; // O(1)
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int> ara(n); // O(n)
    cout<<"Enter Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int maxi = ara[0];
    int mini = ara[0];
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, ara[i]);
        mini = min(mini, ara[i]);
        sum = sum + ara[i];
    }

    cout<<"Max : "<<maxi<<endl;
    cout<<"Min : "<<mini<<endl;
    cout<<"Sum : "<<sum<<endl;

    return 0;
}
