#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {

    map <int, int> m;
    for(int i = 0; i < nums.size(); ++i){
        m[nums[i]] = i;
    }

    if(m.find(target) != m.end()){
        return m[target];
    }

    nums.push_back(target);
    sort(nums.begin(), nums.end());

    m.clear();

    for(int i = 0; i < nums.size(); ++i){
        m[nums[i]] = i;
    }

    return m[target];


}


int main()
{

    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << searchInsert(v, k) << endl;


    return 0;
}
