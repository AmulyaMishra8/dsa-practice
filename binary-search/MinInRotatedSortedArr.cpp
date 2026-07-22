#include <bits/stdc++.h>

using namespace std;

int pivotElement(vector<int> input){
    int left = 0;
    int right = input.size()-1;

    if(input[left] <= input[right]) return input[0];

    while(left < right){
        int mid = left + (right - left)/2;
        if(input[mid] > input[right]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return input[left];
}


int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    cout << pivotElement(arr);

    return 0;
}