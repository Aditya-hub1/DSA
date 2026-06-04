#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    int arr[5];

    cout << "Enter array elements : ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array is : ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout<<"reversed array is: ";
    for (int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* int start=0;
        int end= arr.size()-1;
        
    
         while (start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;*/