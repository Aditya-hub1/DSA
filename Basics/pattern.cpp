#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<"* ";
        }
        cout << endl;

    }
}
 void pattern2(int n) {
        for (int i=0;i<n; i++){
            for(int j=0;j<=i;j++){
            cout<<"* ";}
            cout<<endl;

        }
    
    }
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j;
        }
        cout<< endl;
    }
}
 void pattern4(int n) {
        for(int i=1;i<=n;i++){
            for (int j=1; j<=i;j++){
                cout<< i;
            }
            cout<< endl;
        }}
    void pattern5(int n) {
        for(int i=n;i>0;i--){
            for (int j=0;j<i;j++){
                cout<<j;
            } 
            cout<< endl;
        }

    }
    void pattern7(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<=n-i-1;j++){
                cout<<" ";
            
            }
            for(int j=0;j<2*i+1;j++){
                cout<< "*";

            }
            for(int j=0;j<=n-i-1;j++){
                cout<<" ";
            
            }
            cout<<endl;

        }
    }
    void pattern8(int n){

        

        for(int i=n;i>0;i--){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            
            }
            for(int j=0;j<2*i-1;j++){
                cout<< "*";

            }
            for(int j=0;j<=n-i;j++){
                cout<<" ";
            
            }
            cout<<endl;

        }

    }
   
void pattern9(int n) {

    // Upper Pyramid
    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Inverted Pyramid
    for(int i = n; i > 0; i--) {

        // Spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // Stars
        for(int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cout<<"ENter n: ";
    cin>> n;
   //pattern(n);
   //pattern2(n);
   //pattern3(n);
   //pattern4(n);
   pattern5(n);
   pattern7(n);
   pattern8(n);
   pattern9(n);

}