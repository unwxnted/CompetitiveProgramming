#include <bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {

    for(int i = 0; i  < nums.size(); ++i){
        nums[i] = nums[i]*nums[i];
    }

    sort(nums.begin(), nums.end());

    return nums;
}


int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    vector <int> k = sortedSquares(v);


    return 0;
}
