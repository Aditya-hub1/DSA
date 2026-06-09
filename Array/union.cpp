#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        vector<int>Unionarr;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(Unionarr.size()==0||Unionarr.back()!=nums1[i]){
                    Unionarr.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(Unionarr.size()==0||Unionarr.back()!=nums2[j]){
                    Unionarr.push_back(nums2[j]);
                }
                j++;
                
             }
        }
        while(j<n2){
            if(Unionarr.size()==0 || Unionarr.back()!=nums2[j]){
                Unionarr.push_back(nums2[j]);
            }
            j++;
        }

         while(i<n1){
            if(Unionarr.size()==0 || Unionarr.back()!=nums1[i]){
                Unionarr.push_back(nums1[i]);
            }
            i++;
        }
        return Unionarr;

        
    }
    int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    vector<int> result = unionArray(nums1, nums2);

    cout << "Union Array: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}