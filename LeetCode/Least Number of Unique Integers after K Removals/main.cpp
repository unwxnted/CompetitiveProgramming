#include <bits/stdc++.h>

using namespace std;

int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> freq;
    for (int i : arr) {
        freq[i]++;
    }
    for (auto& [key, value] : freq) {
        pq.push(value);
    }

    while (k > 0 && !pq.empty()) {
        int top = pq.top();
        pq.pop();
        if (k >= top) {
            k -= top;
        } else {
            pq.push(top - k);
            k = 0;
        }
    }
    return pq.size();
}
