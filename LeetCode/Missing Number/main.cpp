#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    map<int, int> m;

    for(int i = 0; i < nums.size(); ++i){
        m[nums[i]] = i;
    }

    for(int i = 0; i <= nums.size(); ++i){
        if(m.find(i) == m.end()){
            return i;
        }
    }

    return -1;
}


int main()
{

    return 0;
}
