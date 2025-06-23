#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  Time Complexity : O(n + n^2) = O(n^2)
  Memory Complexity : O(1 + n) = O(n)
*/

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int> ara(n); // O(n)
    cout<<"Enter Array : ";
    for(int i=0; i<n; i++) // O(n)
    {
        cin>>ara[i];
    }

    for(int i=0; i<n; i++) // O(((n-1)*n) /2) = O(n*n - n)/2 = O(n^2)/2 - n/2 = O(n^2)/2 = O(n^2) Constants like /2 are ignored in Big-O notation
    {
        string ans ="NO\n";
        for(int j=i+1; j<n; j++)
        {
//            if(i==j)
//                continue;
            if(ara[i] == ara[j])
            {
                ans = "Yes\n";
            }

        }
        cout<<"i = "<<i<<" "<<ans;
    }


    return 0;
}
