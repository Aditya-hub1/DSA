#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*pair<int,string> p={1,"Adi"};
    cout<< p.second<<endl;
    pair<int,pair<int,string>> a={14,{15,"Rohit"}};
    cout<< a.second.second<<endl;
    pair<int,int> arr[]={{1,2},{2,4},{4,8}};
    cout<<arr[2].second;
    */
    vector<int>Adi;
    Adi.push_back(1);
    Adi.emplace_back(2); // generally it is faster than push_back;
    cout<< Adi[1]<<endl;
    vector<pair<int,string>> v;
    v.emplace_back(1,"Aditya");
    v.push_back({2,"Adi"});
    cout<< v[0].second<<endl;
    vector<int> v1(5,100);
    cout<<v1[4];

    return 0;
}