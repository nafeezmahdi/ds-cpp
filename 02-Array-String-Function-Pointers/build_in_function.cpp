#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, sizez;

    cout<<"Enter Array Length : ";
    cin>>sizez;

    int ara[sizez];
    cout<<"Enter "<<sizez<<" Numbers : ";
    for(int i=0; i<sizez; i++)
    {
        cin>>ara[i];
    }

    int maxz = ara[0];
    int minz = ara[0];
    for(int i=1; i<sizez; i++)
    {
        maxz = max(maxz, ara[i]);  // Update max if a larger element is found
    }
    cout<<"Maxi Number : "<<maxz<<endl;

    for(int i=1; i<sizez; i++)
    {
        minz = min(minz, ara[i]); // Update min if a smaller element is found
    }
    cout<<"Min Number : "<<minz<<endl;

    cout<<"Before Swapping : "<<"Index 0 : "<<ara[0]<<" Index 1 : "<<ara[1]<<endl;
    swap(ara[0], ara[1]); // Swap first two elements
    cout<<"After Swapping : "<<"Index 0 : "<<ara[0]<<" Index 1 : "<<ara[1]<<endl;


    return 0;
}
