#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {

    sort(nums.rbegin(), nums.rend());

    return nums[k-1];

}

int main()
{

    int n, k;
    cin >> n >> k;
    vector <int> v(n);


    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << findKthLargest(v, k) << endl;


    return 0;
}
