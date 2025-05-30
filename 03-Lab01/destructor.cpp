#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name; // Person's name
    Person *father; // Pointer to Person object representing father
    Person *mother; // Pointer to Person object representing mother

  // Default constructor
    Person(){
    father = NULL; // Initialize pointers to NULL (nullptr recommended in modern C++)
    mother = NULL;
    }

    // Parameterized constructor
    Person (string name, string f_name, string m_name){
    this->name = name; // Assign own name
    father = new Person; // Dynamically allocate new Person object for father
    father->name = f_name; // Assign father's name
    mother = new Person; // Dynamically allocate new Person object for mother
    mother->name = m_name; // Assign mother's name
    }

    // Method to print information
    void print_info(){
    cout<<"Name : "<<name<<endl;
    cout<<"Fathers Name : "<<father->name<<endl;
    cout<<"Mothers Name : "<<mother->name<<endl;
    }

    // Destructor to clean up dynamically allocated father and mother objects
    ~Person(){
    cout<<"Called\n"; // Print when destructor is called (for debugging)
    if(father != NULL){
      delete father; // Delete dynamically allocated father object to free memory
    }
     if(mother != NULL){
        delete mother; // Delete dynamically allocated mother object to free memory
    }
    //It deletes dynamically allocated father and mother objects to prevent memory leaks.
    //Prints "Called" once for p's destructor.
    //Then father and mother destructors are called recursively (which print "Called" as well).

    }
};


int main(){
    Person p("AB", "BA", "CA");
    p.print_info();

return 0;
}
