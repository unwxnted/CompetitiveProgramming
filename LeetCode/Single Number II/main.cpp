#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(auto i : nums){
            m[i]++;
        }

        for(int i = 0; i < nums.size(); ++i){
            if(m.find(nums[i]) != m.end() && m[nums[i]] == 1){
                return nums[i];
            }
        }

        return -1;
}
