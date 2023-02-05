#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {

    for(int i = 0; i < nums.size();++i){
        if(nums[i] == val){
            nums.erase(nums.begin()+(i));
            --i;
        }
    }

    return nums.size();


}


int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    cout << removeElement(v, k) << endl;
    return 0;
}
