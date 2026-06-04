#include<iostream>
using namespace std;
class solution{
    public:
    void printno(){
        int x;
        cout<<"enter the value of x:";
        cin>> x;
        cout<<"value of x:"<< x;
    }
};
int main (){
    solution obj;
    obj.printno();
    return 0;
}