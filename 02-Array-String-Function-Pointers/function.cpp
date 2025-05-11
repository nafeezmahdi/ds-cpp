#include<iostream>

using namespace std;

int summ(int x, int y);
void swapp(int &x, int &y);
// it's using references, which is similar to pointers but more convenient and safer
int subb(int x, int y);

//These are function declarations or function prototypes. They tell the compiler:
//“These functions exist and will be defined later.”
//Without these, the compiler would throw an error if you tried to call summ(), swapp(), or subb() in main() before their full definitions appeared.

int main()
{
    int num1,num2;
    cout<<"Enter Two Numbers : ";
    cin>>num1>>num2;
    cout<<"Numbers Are : "<<num1<<" "<<num2<<endl;
    cout<<"Sum : "<<summ(num1,num2)<<endl;

    if(num1>num2)
    {
        cout<<"Sub : "<<subb(num1,num2)<<endl;
    }
    else
    {
        swapp(num1,num2);
        cout<<"Sub : "<<subb(num1,num2)<<endl;
    }

    return 0;
}

int summ(int x, int y)
{
    return x+y;
}

void swapp(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int subb(int x, int y)
{
    return x-y;
}
