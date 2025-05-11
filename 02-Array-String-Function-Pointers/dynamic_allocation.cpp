#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;  // Initialize sum to 0
    cout << "Enter a Number : ";
    cin >> n;

    int *ara = new int[n];  // Dynamically allocate an array of size n

    cout << "Enter " << n << " Numbers in this Array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> ara[i];
        sum += ara[i];  // Increment sum by the current element
    }


    cout << "Sum : " << sum << endl;  // Output the sum

    delete[] ara;  // Free the dynamically allocated memory
    return 0;
}
