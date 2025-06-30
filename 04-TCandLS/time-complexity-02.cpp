#include<bits/stdc++.h>
#include<iostream>

using namespace std;
/*
  Time Complexity : O(2^n)
  Memory Complexity : O(n)
*/

int called = 0;
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
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

//Time Complexity: O(2^n)
//Recursive Tree Structure:
//The recursive Fibonacci function splits into two calls at each level:
//fib(n) calls fib(n-1) and fib(n-2)
//fib(n-1) further calls fib(n-2) and fib(n-3)
//fib(n-2) calls fib(n-3) and fib(n-4)
//This creates a binary recursion tree, where each node spawns two more nodes.
//Exponential Growth of Recursive Calls:
//At each level, you make two recursive calls. So the total number of calls at each level grows exponentially.
//At the root (level 0), you have 1 call to fib(n).
//At level 1, you make 2 calls to fib(n-1) and fib(n-2).
//At level 2, each of those calls branches into 2 more calls, and so on.
//This results in a binary tree with height n, where each level doubles the number of calls, leading to a total number of calls of around 2^n.
//So the number of recursive calls grows exponentially, resulting in a Time Complexity of O(2^n).

//Memory Complexity: O(n)
//Function Call Stack:
//The main memory cost of a recursive function is the space required to store function calls on the call stack.
//Each recursive call to fib(n) adds a new function call to the stack.
//Since we only store one call at a time in memory (for each level), the depth of the recursive call stack determines the memory usage.
//Recursive Depth:
//The maximum depth of the recursion tree is n. This is because the recursion continues until we reach fib(0) or fib(1), which are the base cases.
//At each level, there is only one function call on the stack, so the memory required is proportional to the depth of the recursion.
//Memory Usage at each level:
//At each level of recursion, a new call is placed on the stack. The maximum depth of recursion is n (because the function recurses from fib(n) down to fib(0) or fib(1)).
//The space required to store each function call is constant: O(1) for each level.
//Thus, the total space complexity is determined by the depth of recursion, which is O(n).
