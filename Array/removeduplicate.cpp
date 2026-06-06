#include<iostream>
#include<vector>
using namespace std;

int remove_duplicate(vector<int> &arr) {
    int n = arr.size();
    int i = 0;

    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
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

    int k = remove_duplicate(arr);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}