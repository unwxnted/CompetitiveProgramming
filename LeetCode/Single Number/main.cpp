#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int k = 1;

        for(int i = 0; i < nums.size(); i+=2){

            if(k < nums.size()-1 && nums[i] != nums[k]){
                return nums[i];
            }
            if(k >= nums.size()){
                return nums[i];
            }

            k+=2;
        }

        return -1;

}
