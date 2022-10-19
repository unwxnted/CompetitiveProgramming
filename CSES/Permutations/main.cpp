#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> nums;

    for(int i = 0; i <= n; i+=2){
        if(i != 0)
            nums.push_back(i);
    }

    for(int i = 1; i <= n; ++i){
        if(i%2!=0){
            nums.push_back(i);
        }
    }

    unsigned int k;
    unsigned int l = 0-1;
    for(int i = 1; i < nums.size(); ++i){
        if(nums[i]-nums[i-1] < 0){
            k = nums[i]-nums[i-1];
            k = l-k+1;
        }

        if(k <=1){
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }


    for(auto i: nums){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
