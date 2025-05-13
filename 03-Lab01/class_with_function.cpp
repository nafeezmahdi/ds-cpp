#include<bits/stdc++.h>
using namespace std;

// Define a class named 'Students'
class Students
{
public:
    int id;       // Variable to store the student ID
    float gpa;    // Variable to store the student GPA

    // Method to set the values of ID and GPA
    void setValue(int x, float y)
    {
        id = x;     // Assign value x to the student's ID
        gpa = y;    // Assign value y to the student's GPA
    }

    // Method to display the student's ID and GPA
    void display()
    {
        cout << "ID : " << id << endl << "GPA : " << gpa << endl << endl;
    }
};

int main()
{
    Students naf,mah;
    naf.setValue(245, 2.53);
    mah.setValue(244, 2.73);
    naf.display();
    mah.display();

    return 0;
}
