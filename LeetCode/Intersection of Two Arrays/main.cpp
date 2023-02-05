#include <bits/stdc++.h>

using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2){

    unordered_map<int, int>m1;
    unordered_map<int, int>m2;
    unordered_map<int, int>q;
    vector <int> v;

    for(auto i : nums1){
        m1[i]++;
    }

    for(auto i : nums2){
        m2[i]++;
    }

    if(m1.size() > m2.size()){
        for(auto i : m1){
            if(m2.find(i.first) != m2.end()){
                q[i.first]++;
            }
        }
    }else{

        for(auto i : m2){
            if(m1.find(i.first) != m1.end()){
                q[i.first]++;
            }
        }


    }

    for(auto i : q){
        v.push_back(i.first);
    }
    return v;


}
