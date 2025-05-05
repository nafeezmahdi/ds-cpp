#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum=0, num[10];

    cout<<"Enter 10 Numbers : ";
    for(int i=0; i<10; i++)
    {
        cin>>num[i];
    }

    for(int i=0; i<10; i++)
    {
        sum = sum + num[i];
    }

    cout<<"Total : "<<sum<<endl;

    return 0;
}
