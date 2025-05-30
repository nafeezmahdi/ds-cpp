#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student() {
    // Default constructor: Required because you are creating an array first (Student s[10]) which calls the default constructor, then assigning objects.
    } // Default constructor does nothing

    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }

    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<endl;
        // " "<<fathers_name<<" "<<mothers_name<<endl;
    }

};



int main()
{
    Student s[10];  // Create an array of 10 Student objects (calls default constructor for each)
    // Student s[10]; creates an array of 10 Student objects, each constructed with the default constructor (which does nothing).

     // Initialize each Student object in the array using assignment and parameterized constructor
    for(int i=0; i<10; i++)
    {
        s[i] = Student("A", 50-i, 20+i);
        // The for loop assigns new Student objects to each element using the parameterized constructor, effectively replacing the default constructed objects.
    }

    // Print info of all students
    for(int i=0; i<10; i++)
    {
        s[i].print_info();
    }

    return 0;
}

