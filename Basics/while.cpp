#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int d;
    cout<< "Enter the digit: ";
    cin>> d;

    int sum=0;
    int count=0;
    while(count<50){
        sum=sum+d;
        d=d+10;
        count++;
    }
    cout<<sum;
    return 0;
    
 }