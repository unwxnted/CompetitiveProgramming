#include <bits/stdc++.h>

using namespace std;

vector<int> buildArray(vector<int>& nums)
{

    vector <int> newArray(nums.size());

    for(int i = 0; i < nums.size(); ++i){
        newArray[i] = nums[nums[i]];
    }

    return newArray;

}


int main()
{
    int n;
    cin >> n;
    vector <int> nums (n);

    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    nums = buildArray(nums);
    for(int i = 0; i < nums.size(); ++i){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
