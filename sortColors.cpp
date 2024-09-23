#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums) {
        int i = 0;     // Left pointing variable
        int n = nums.size();
        int j = n-1;   // Right pointing variable

        int index = 0;
        while(index<=j){
            if(nums[index] == 0){
                swap(nums[index], nums[i]);
                i++;
                index++;
            }
            else if(nums[index] == 2){
                swap(nums[index], nums[j]);
                j--;
                // no need of index++ here,
            }
           else{
            index++;
           }
        }

    }