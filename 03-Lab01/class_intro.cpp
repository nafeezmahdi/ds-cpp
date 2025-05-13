#include<bits/stdc++.h>
using namespace std;

// Define a class named Students
class Students
{
public:
    string name;  // Stores the student's name
    int id;       // Stores the student ID
    int age;      // Stores the student's age
};

int main()
{
    Students naf;
    cout<<"Enter NAF Info : "<<endl<<"Name : ";
    getline(cin, naf.name);
    cout<<"ID : ";
    cin>>naf.id;
    cout<<"Age : ";
    cin>>naf.age;
    cout<<"Name - "<<naf.name<<", Age - "<<naf.age<<", ID - "<<naf.id<<endl;

    return 0;
}
