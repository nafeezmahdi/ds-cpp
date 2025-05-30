#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Info
{
public:
    string name;
    int id,sec,age;
    void print()
    {
        cout<<name<<endl<<id<<endl<<sec<<endl<<age<<endl;
    }

    // Constructor 1: Initializes all attributes (name, id, sec, age)
    Info (string n, int i, int s, int ag)
    {
        name = n;
        id = i;
        sec = s;
        age = ag;
    }

     // Constructor 2: Initializes id, sec, age only (no name)
    Info(int id, int sec, int age)
    {
        this-> id = id;  // 'this' distinguishes class members from parameters
        this -> sec = sec;
        this -> age = age;
        // this->	Used to refer to class members when local parameters have the same name.
    }

    // Constructor 3: Default constructor, no parameters
    Info()
    {
        cout<<"NewLine"<<endl;  // Prints a line when this constructor is called
        // No values are set here; name is empty, others are 0 by default
        // Default Constructor	Called when no parameters are passed. Useful for creating empty/default objects.
    }
};

int main()
{
    // Object per1 created using constructor 1 (all values provided)
    Info per1("Nafeez Mahdi", 244, 06, 26);
    per1.print();
    // Object per2 created using default constructor
    Info per2; // Calls default constructor, prints "NewLine"
    // All members have default values
    //
    // Object per3 created using constructor 2 (without name)
    Info per3(213, 2, 25);
    per3.print();

    return 0;
}
