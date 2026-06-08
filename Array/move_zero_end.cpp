#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void move(vector<int> & arr){
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
           /* int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;*/
            swap(arr[i],arr[j]);

            j++;
        } 
    }
}

int main(){
     int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    move(arr);
    cout << "Array after move:: ";
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;

}