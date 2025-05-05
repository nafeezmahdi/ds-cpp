#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    bool x = true;
    bool y = false;

    cout<<"Enter a Marks : ";
    cin>>n;

    if(n>=60 && n<=100)
    {
        cout<<"Pass";
    }
    else if(n>=40 && n<60)
    {
        cout<<"Try Again";
    }
    else
    {
        cout<<"Wrong Number";
    }

    return 0;
}
