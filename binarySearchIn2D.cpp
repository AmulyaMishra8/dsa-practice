#include <bits/stdc++.h>

using namespace std;

bool binarySearch2d(vector<vector<int>>input, int target){
    int rowSize = input[0].size() - 1;
    int columnSize = input.size() - 1;
    int top = 0;
    int bottom = columnSize;
    int left = 0;
    int right = rowSize;
    while(top <= bottom){
        int rowMid = top + (bottom - top)/2;
        if(input[rowMid][0] <= target && input[rowMid][rowSize] >= target){
            while(left <= right){
                int mid = left + (right - left)/2;
                if(target == input[rowMid][mid]){
                    return true;
                }
                else if(target > input[rowMid][mid]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            return 0;
        }
        else if(target > input[rowMid][rowSize]){
            top = rowMid + 1;
        }
        else if(target < input[rowMid][0]){
            bottom = rowMid - 1;
        }
    }
    return 0;
}
int main(){
    int n,m;
    cout << "input number of rows and number of columns respectively";
    cin >> n >> m;
    vector<vector<int>> input(n ,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input[i][j];
        }
    }
    int target;
    cout << "enter target number";
    cin >> target;
    cout << binarySearch2d(input, target);
    return 0;
};
