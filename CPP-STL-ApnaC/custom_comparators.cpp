#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;

}

int main()
{
    vector <pair <int, int>> vec = {{3,1}, {2,3}, {2,2}, {2,1}, {1,3}, {4,1}, {1,5}};
    vector <pair <int, int>> vec2 = {{3,1}, {2,3}, {2,2}, {2,1}, {1,3}, {4,1}, {1,5}};

    sort(vec.begin(), vec.end());
    sort(vec2.begin(), vec2.end(), comparator);

    cout<<"Vec Sort Pair Value : "<<endl;
    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    cout<<"Vec Sort Pair By Second Value : "<<endl;
    for(auto p : vec2)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;
}
