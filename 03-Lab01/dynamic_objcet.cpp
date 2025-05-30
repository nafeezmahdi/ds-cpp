#include<iostream>
#include<bits/stdc++.h>
//Dynamic Object
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
 // string fathers_name;
 // string mothers_name;

    // Parameterized constructor initializes name, std_id, and age
    Student(string name, int std_id, int age){
    this->name = name;
    this->std_id = std_id;
    this->age = age;
    }

    // Method to print all info about the student
    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<endl;
    // <<fathers_name<<" "<<mothers_name<<endl;
    }

};

int main(){
    // Dynamically create a Student object in heap with new
    Student *s = new Student("A", 10, 20);
    // Creates a new Student object on the heap and s stores its address.

    // Access print_info() using pointer arrow operator
    s->print_info();

    // Access print_info() using dereference operator and dot operator
    (*s).print_info();

    // Note: The object 's' points to is NOT deleted, which leads to memory leak here.
    // Properly, you should call: delete s;
    return 0;
}
