#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Class with private members and public setter/getter
class Info {
private:
    int id, age;

public:
    void print_info(){
    cout<<id<<" "<<age<<endl;
     }
     void set_value(int x, int y){
     id = x;
     age = y;
     }

//id and age are private: cannot be accessed directly outside the class.
//set_value() is a public setter function to assign values to id and age.
//print_info() prints the id and age values.

};

// Base class with protected member
class Info2 {
protected:
    string name;

//name is a protected member, which means:
//It is not accessible outside the class.
//But it is accessible by derived classes (like Info3).
//This class acts like a base class for inheritance.
};

// Derived class from Info2
class Info3:Info2 {
private:
    int id,age;
    public:
    void print_info3(){
    cout<<name<<endl<<id<<endl<<age<<"\n\n";
    }
    void set_val(string x, int y, int z){
    name = x;
    id = y;
    age = z;
    }

//Info3 inherits from Info2 using inheritance.
//It adds its own private data members: id and age.
//set_val():
//Assigns a value to name (from Info2), id, and age.
//print_info3():
//Prints all three values (name, id, and age).

};

int main(){
Info p1,p2;
Info3 p;
//Create two objects of class Info (p1, p2) and one object of Info3 (p).

p1.set_value(249, 24);
p1.print_info();
p2.set_value(213, 19);
p2.print_info();
//Assigns and prints info for two basic Info objects.
p.set_val("Nafeez Mahdi", 243, 25);
p.print_info3();
//Assigns and prints full info (name, id, age) using the derived class Info3.
return 0;
}
