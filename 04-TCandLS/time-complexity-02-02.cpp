#include<bits/stdc++.h>
#include<iostream>

using namespace std;
/*
  Time Complexity : O(n)
  Memory Complexity : O(n)
*/

int called = 0;
int save[100];
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(save[n]!=0)
        return save[n];
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n] = x+y;
    return x+y;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Fib : "<<fib(n)<<endl;
    cout<<"Called : "<<called<<endl;

    return 0;
}

//Time Complexity: O(n)
//Memoization:
//Without memoization: The original recursive Fibonacci would compute fib(n-1) and fib(n-2) multiple times, leading to O(2^n) time complexity (exponential).
//With memoization: You store each result in the save[] array after computing it once. Once a Fibonacci number is computed, it is not recomputed. Hence, each Fibonacci number from 0 to n is calculated only once.
//Recursive Depth:
//The recursion depth is linear because you only need to compute each Fibonacci number once. Since each value is calculated once and stored, the overall number of calls is proportional to n.
//Therefore, the time complexity is O(n) — you compute each Fibonacci value once, and each call to fib(n) has a constant amount of work to do.
//
//Memory Complexity: O(n)
//Memoization Array (save[]):
//The array save[100] stores Fibonacci numbers from 0 to n. This requires O(n) space, where n is the size of the input.
//Even though the array size is fixed to 100 here, it scales to O(n) if you generalize it for larger values of n.
//Recursive Call Stack:
//In addition to the memoization array, you need space for the call stack to handle recursion.
//The recursion will go to a depth of n, meaning the call stack will use O(n) space.
//Therefore, total memory complexity is O(n) due to both the save[] array and the recursion depth.
