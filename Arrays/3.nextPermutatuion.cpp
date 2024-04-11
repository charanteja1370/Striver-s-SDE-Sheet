#include <bits/stdc++.h>

void nextPermutation(vector<int>& nums) {
    int ind1;
    int ind2;
    for(int i = nums.size()-2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            ind1 = i;
            break;
        }
    }
    if(ind1 == -1){
        sort(nums.begin(), nums.end());
    }else{
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] > nums[ind1]){
                ind2 = i;
                break;
            }
        }
        swap(nums[ind1], nums[ind2]);
        sort(nums.begin()+ind1+1, nums.end());
    }
}