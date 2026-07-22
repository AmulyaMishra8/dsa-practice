#include <bits/stdc++.h>

using namespace std;

int kokoEats(vector<int> &piles, int h){
    int maxi = INT_MIN;
    for(int i = 0; i < piles.size(); i++){
        maxi = max(maxi, piles[i]);
    }

    int left = 1;
    int right = maxi;
    int ans = right;
    while(left <= right){
        int mid = left + (right - left)/2;
        int currTime = 0; 
        for(int j = 0; j < piles.size(); j++){
            currTime += (piles[j] + mid - 1) / mid;
        }

        if(currTime > h){
            left = mid + 1;
        }
        else{
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> piles = {1,4,3,2};
    int h = 4;
    cout << kokoEats(piles, h);
    return 0;
}   