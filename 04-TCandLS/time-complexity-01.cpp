#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/*
  Time Complexity : O(1)
  Memory Complexity : O(1)
*/

int main ()
{
    int a,b,c;
    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a+b+c;
    int mul = a*b*c;

    cout<<"Max : "<<maxi<<endl;
    cout<<"Min : "<<mini<<endl;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Mul : "<<mul<<endl;

    return 0;
}

//Time Complexity Analysis: O(1) (Constant Time)
//Time complexity measures how the execution time of your code grows with respect to the size of the input.
//Here, Each operation here takes a fixed amount of time, regardless of the value of a, b, or c.
//So no matter what numbers the user enters, the program always performs the same number of steps.
//Therefore: Time Complexity: O(1) (constant time)
//
//
//Memory Complexity Analysis: O(1) (Constant Space)
//Memory complexity (also called space complexity) refers to how much extra memory your program uses as the input size grows.
//Here, All of these are primitive int types.
//You're not using any arrays, vectors, strings, or recursion.
//No memory grows based on input size.
//❗ Even though the user enters values, your program uses the same amount of memory for the variables a, b, and c, regardless of the input values.
