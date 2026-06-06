#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    int n = arr.size();

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout<<"enter n:: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array element:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  

    if(isSorted(arr))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}