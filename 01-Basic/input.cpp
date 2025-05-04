#include <iostream>

using namespace std;

int main()
{
    int x,y;
    float f;
    double d;
    char ch;
    string s,ss;
    ss = "Hey, ";


    cout<<"Enter Two Number : ";
    cin>>x>>y;
    cout<<"Enter Float and Double Number : ";
    cin>>f>>d;
    cout<<"Enter Character : ";
    cin>>ch;
    cout<<x<<" "<<y<<endl;
    cout<<f<<" "<<d<<endl;
    cout<<ch<<endl;
    cout<<"Enter a string : ";
 /* getline() doesn't work as expected after cin
    After using cin >> ch, there is a leftover newline (\n) character in the input buffer, so getline() immediately reads an empty line.
    ✅ Fix: Add cin.ignore() before using getline(): */
    cin.ignore(); // Clear newline character before getline
    getline(cin, s);
  //  cin>>s;
    cout<<endl<<ss+s;

    return 0;
}
