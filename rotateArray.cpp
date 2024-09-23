#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        int newIndex = (i + k) % 6;
        ans[newIndex] = nums[i];
    }

    nums = ans;
}