#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int *y = &x;
//int *y declares a pointer y to an integer. It can store the memory address of an integer.
//&x is the address-of operator, which gives the memory address of x.
//So, y now holds the address of x. In other words, y points to x.

    cout<<"Enter A Number : ";
    cin>>x;
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
    cout<<"*Y : "<<*y<<endl;
    cout<<"&Y : "<<&y<<endl;


    return 0;
}
