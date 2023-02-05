#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {

    vector <int> k;

    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != 0)
            k.push_back(nums[i]);
    }

    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] == 0)
            k.push_back(nums[i]);
    }

    nums = k;

}


int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    moveZeroes(v);

    for(int i = 0; i < n; ++i){
        cout << v[i] << endl;
    }

    return 0;
}
