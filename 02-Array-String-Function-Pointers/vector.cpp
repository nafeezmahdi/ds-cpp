#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> ara;   // Declare an empty vector of integers

    for(int i=0; i<10; i++)
    {
        ara.push_back(i); // Appends i to the end of the vector
        // push_back() is a member function of the C++ std::vector class that:
        // Adds a new element to the end of the vector.
    }

    cout << "Full array after push: [";
    for (int i = 0; i < ara.size(); i++)
    {
        cout << ara[i];
        if (i != ara.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Insert the number 55 at the 6th position (index 5)
    ara.insert(ara.begin() + 5, 55);
    // Now vector becomes: [0, 1, 2, 3, 4, 55, 5, 6, 7, 8, 9]
    // Print the new size of the vector after insertion
    cout << "Size after insert a new value : " << ara.size() << endl;

    // Resize the vector to size 12
    ara.resize(12);
    // Since previous size was 11, it adds 1 more element initialized to 0
    // Now vector becomes: [0, 1, 2, 3, 4, 55, 5, 6, 7, 8, 9, 0]

    // Print the size again (will show 12)
    cout << "Size after resize the vector : " << ara.size() << endl;

    // Remove the last element from the vector
    ara.pop_back();
    // Last element (0) is removed → vector size is now 11

    // Print the size again (will show 11)
    cout << "Size after removing last value : " << ara.size() << endl;

    // Print message before showing updated vector contents
    cout << "New Elements : [";

    // Print the final elements in the vector
    for (int i = 0; i < ara.size(); i++)
    {
        cout << ara[i];
        if (i != ara.size() - 1)
        cout << ", ";

    }
    cout << "]" << endl;

    return 0;
}
