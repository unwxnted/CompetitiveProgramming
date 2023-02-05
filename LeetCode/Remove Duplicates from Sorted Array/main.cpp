#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1;){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin()+(i+1));
            }else{
                i++;
            }
        }

    return nums.size();

}

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << removeDuplicates(v) << endl;



    return 0;
}
