#include <bits/stdc++.h>

using namespace std;

int Search(vector<int>& nums, int target)
{
    map <int, int> m;
    for(int i = 0; i < nums.size(); ++i)
    {
        m[nums[i]] = i;
    }

    if(m.find(target) != m.end())
    {
        return m[target];
    }
    else
    {
        return -1;
    }


}


int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    cout << Search(v, k);


    return 0;
}
