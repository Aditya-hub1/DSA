#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int S_largest(vector<int> & arr){
    int n=arr.size();
    int lar=arr[0];
    int s_lar=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            s_lar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>s_lar){
            s_lar=arr[i];
        }
        
    }
    return s_lar;
}
int main(){
    int n;
    cout<<"enter n:: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout<<" Second Largest Elemenet is:: "<< S_largest(arr);
    return 0;
}