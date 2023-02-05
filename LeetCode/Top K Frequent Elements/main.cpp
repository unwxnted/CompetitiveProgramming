#include <bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{

    int n = nums.size();
    map<int,int> m;
    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        m[nums[i]]++;
    }

    priority_queue<pair<int,int>> pq;

    for(auto x : m)
    {
        pq.push({x.second,x.first});
    }

    while(k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;

}

int main()
{

    int n, k;
    cin >> n >> k;
    vector <int> v(n);

    vector <int> t = topKFrequent(v, k);

    for(int i = 0; i < t.size(); ++i)
    {
        cout << t[i] << " ";
    }
    cout << endl;


    return 0;
}
