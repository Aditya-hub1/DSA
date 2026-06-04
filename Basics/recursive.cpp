#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int cnt=0;
void f(){
    if(cnt==4){
        return;}
    
    cout<< cnt<< endl;
    cnt++;
    f(); 
}
int main(){
    f();
    return 0;
}*/
/*void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"name"<< endl;
    f(i+1,n);
}*/
/*void printN(int i,int n){
    if(i>n){
        return;
    }
    cout<<" "<<i ;
    printN(i+1,n);
}
int main(){
    int n;
    cout<< "enter N:: ";
    cin>>n;
    printN(1,n);
    return 0;

}*/

void reverse(int i,int n){
    if(i<1){
        return;
    }
    reverse(i-1,n);
   
}
int main(){
    int n;
    cout<<"Emter N::";
    cin>> n;
    reverse(n,n);
    return 0;
}