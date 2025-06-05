#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =  {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end());
    reverse(vec.begin()+1, vec.begin()+3);

    cout<<"Full Reverse Vec After Reverse Index 1 & 3 : ";
    for(auto val : vec ){
        cout<<val<<" ";
    }
    cout<<endl;



    return 0;
}
