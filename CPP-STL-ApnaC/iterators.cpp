#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;

    // Print address and value of the first element
    cout<<"vec.begin : "<<&(*vec.begin())<<endl<<"Value : "<<*(vec.begin())<<endl;
    cout<<"vec.end : "<<&(*vec.end())<<endl<<"Value : "<<*(vec.end())<<endl;

    // Forward traversal
    cout<<endl<<"Vec : ";
    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // Reverse traversal using reverse_iterator
    cout<<endl<<"Reverse Vec : ";
    for(rit=vec.rbegin(); rit!=vec.rend(); rit++){
        cout<<*(rit)<<" ";
    }
    cout<<endl;

    // Reverse traversal of vec2 using auto
    cout<<endl<<"Reverse Vec2 Auto : ";
    for(auto arit=vec2.rbegin(); arit!=vec2.rend(); arit++){
        cout<<*(arit)<<" ";
    }
    cout<<endl;

    return 0;
}

