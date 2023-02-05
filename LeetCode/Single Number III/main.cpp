#include <bits/stdc++.h>

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        vector<int> v;
        for(auto i : nums){
            m[i]++;
        }

        for(int i = 0; i < nums.size(); ++i){
            if(m.find(nums[i]) != m.end() && m[nums[i]] == 1){
                v.push_back(nums[i]);
            }
        }

        return v;
}
