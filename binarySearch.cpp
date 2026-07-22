#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int right = arr.size()-1;
    int left = 0;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
           left = mid + 1; 
        }
        else if(target < arr[mid]){
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int target;
    cout << "enter the target value: ";
    cin >> target;
    cout << binarySearch(input, target);
    return 0;
}