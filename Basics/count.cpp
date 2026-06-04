#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int reverseNumber(int n) {
        int lastdigit;
        int reverse=0;
        while(n>0){
            lastdigit=n%10;
            reverse=(10*reverse)+lastdigit;
            n=n/10;
        }
        cout<< "reverse of no is: "<<reverse;
        return reverse;
       

    }
     bool isPalindrome(int n) {
         int lastdigit;
         int reverse=0;
         int original=n;
         while(n>0){
            lastdigit=n%10;
            reverse=(10*reverse)+lastdigit;
            n=n/10;
        }
       return reverse==original;
        

    }


int main(){
    cout<<"enter NO: ";
    int n;
    cin>> n;
    int cnt=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        cnt=cnt+1;
        cout << lastdigit<< endl;
        
        n=n/10;
    }
    cout<< "total count is:: "<<cnt<<endl;
    reverseNumber(original);
    if(isPalindrome(original))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}