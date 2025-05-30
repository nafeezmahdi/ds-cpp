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

    Student() {}  // Default constructor

    // Constructor initializing all member variables
    Student(string name, int id, int age, string f_name, string m_name)
    {
        this->name = name;
        std_id = id;
        this->age = age;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    // Constructor initializing only name, id, and age
    Student (string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    // Method to print student information
    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

    // Overload < operator to compare Students by age (for sorting)
    bool operator < (Student s)
    {
        return age < s.age;
    }
    // Uses overloaded < operator defined in the class to sort the students by age in ascending order.

};
// Custom comparator function to compare Students by std_id
bool comp(Student a, Student b)
{
    // when a is less then b
    return a.std_id < b.std_id;
    // returns true if a's std_id is less than b's std_id
    // Uses the external comparator function comp to sort by std_id in ascending order.
}

int main()
{
    vector<Student>a;
    // Fill vector with 10 Students
    // Using constructor with (name, id, age)
    for(int i=0; i<10; i++)
    {
        a.push_back(Student("A", 30+i, 20-i));
    }

    // Print unsorted students
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }

    cout<<endl<<"After Sorting By Age - "<<endl;
    // Sort vector using overloaded < operator (by age)
    sort(a.begin(), a.end());
    // Print students after sorting by age
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }

    cout<<endl<<"After Sorting By ID - "<<endl;
    // Sort vector using custom comparator (by std_id)
    sort(a.begin(), a.end(), comp);
    // Print students after sorting by ID
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }


    return 0;
}

