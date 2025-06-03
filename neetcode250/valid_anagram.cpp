#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cout<<"Enter Two String : ";
    cin>>s>>t;
    cout<<s<<endl<<t<<endl;
    if (s.length() != t.length())
    {
        cout << "Strings are not of equal length." << endl;
        return 0;  // non-zero = abnormal exit
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] == t[j])
            {
                s[i] = '#';  // mark as removed
                t[j] = '#';  // mark as removed
                break;       // break inner loop to avoid duplicate removals
            }
        }
        cout<<s<<endl<<t<<endl;
    }
        cout<<s<<endl<<t<<endl;

        return 0;
    }
