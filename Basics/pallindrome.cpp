#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool Pcheck(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    cout<<"enter string for check:: ";
    string s;
    cin>> s;
    if(Pcheck(s)){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    return 0;


    
}