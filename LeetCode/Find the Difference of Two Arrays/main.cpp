#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int> > v(2);
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;

        for(int i = 0; i < nums1.size(); ++i){
            m1[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); ++i){
            m2[nums2[i]]++;
        }

        for(int i = 0; i < nums1.size(); ++i){
            if(m2.find(nums1[i]) != m2.end()){
                m2.erase(nums1[i]);
                m1.erase(nums1[i]);
            }
        }

        for(auto i : m1){
            v[0].push_back(i.first);
        }

        for(auto i : m2){
            v[1].push_back(i.first);
        }

        return v;

}
