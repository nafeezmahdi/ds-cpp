#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =  {1, 2, 3, 4, 5};
    int a=5, b=6;
    long int la = 6;
    long long lla = 6;
    string s = "abc";
    string t = "bca";

    reverse(vec.begin(), vec.end());
    reverse(vec.begin()+1, vec.begin()+3);


    cout<<"Full Reverse Vec After Reverse Index 1 & 3 : ";
    for(auto val : vec )
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Min Element of Vec : "<<*min_element(vec.begin(), vec.end())<< endl;
    cout<<"Max Element of Vec : "<<*max_element(vec.begin(), vec.end())<< endl;

    cout<<"Binary Search 4 in Vec : "<<binary_search(vec.begin(), vec.end(), 4)<< endl;
    cout<<"Binary Search 10 in Vec : "<<binary_search(vec.begin(), vec.end(), 10)<< endl;

    cout<<"S : "<<s<< endl;
    next_permutation(s.begin(), s.end());
    cout<<"Next Permutation : "<<s<<endl;

    cout<<"T : "<<t<< endl;
    prev_permutation(t.begin(), t.end());
    cout<<"Prev Permutation : "<<s<<endl;

    cout<<"Max of 4,5 : "<<max(4, 5)<<endl;
    cout<<"Min of 4,5 : "<<min(4, 5)<<endl;

    swap(a, b);
    cout<<"After Swapping a=5 & b=6 : "<<a<<" "<<b<<endl;

    cout<<"Built in Count of a : "<<__builtin_popcount(a)<<endl;
    cout<<"Built in Count of long a : "<<__builtin_popcountl(la)<<endl;
    cout<<"Built in Count of long long a : "<<__builtin_popcount(lla)<<endl;

    return 0;
}
