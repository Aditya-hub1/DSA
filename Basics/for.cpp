#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    int low, high;

    cout << "Enter low no:";
    cin >> low;

    cout << "Enter High No:";
    cin >> high;

    int sum = 0;

    for(int i = low; i <= high; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}