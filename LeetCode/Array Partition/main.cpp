#include <bits/stdc++.h>

using namespace std;


int arrayPairSum(vector<int>& nums) {

    int n = nums.size();
    int sum = 0;
    sort(nums.begin(), nums.end());

    for(int i = 1; i < n; ++i){
        if(i % 2 != 0)
            sum+= min(nums[i], nums[i-1]);

    }

    return sum;

}

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }


    cout << arrayPairSum(v) << endl;


    return 0;
}
