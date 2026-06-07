#include<iostream>
#include<vector>
using namespace std;

void rotate_left(vector<int>& arr) {
    int n = arr.size();

    int temp = arr[0];
    int k;
    cout<<"entter K::";
    cin>>k;
   
    

    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotate_left(arr);  

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
