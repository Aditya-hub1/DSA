#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lar_ele(vector<int>& arr){
    int n=arr.size();
    int lar=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    return lar;
}

int main(){
    int n;
    cout<<"enter n:: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout<<"Largest Elemenet is:: "<< lar_ele(arr);
    return 0;
}