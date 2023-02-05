#include <bits/stdc++.h>

using namespace std;


vector <int> twoSum(vector<int>& nums, int target) {

    map <int, int> m;
    map <int, int> l;
    vector <int> k;

    for(int i = 0; i < nums.size(); ++i){
        m[nums[i]] = nums[i];
    }

    for(int i = 0; i < nums.size(); ++i){
        l[nums[i]] = i;
    }

    for(int i = 0; i < nums.size(); ++i){
        if( nums[i] + m[target-nums[i]] == target && l[target-nums[i]] != i){
            k.push_back(i);
            k.push_back(l[target-nums[i]]);
            return k;
        }
    }

    return k;

}

int main()
{

    int n, j;
    cin >> n >> j;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    vector <int> k = twoSum(v, j);

    for(int i = 0; i < k.size(); ++i){
        cout << k[i] << " ";
    }

    cout << endl;

    return 0;
}
