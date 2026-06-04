// sum of cube of each digit eqaul to n 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
        int original=n;
        int ld;
        int sum=0;
        while(n>0){
            ld=n%10;
            sum=sum+(ld*ld*ld);
            n=n/10;
        }
        return sum==original;

    }
int main(){
    int n;
    cout<<"enter n:: ";
    cin>> n;
     if(isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
    return 0;
}