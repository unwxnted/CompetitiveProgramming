#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {

    int cant = 0;
    int aux = 0;
    int n = s.size();

    for(int i = 0; i < n; ++i){
        aux = 0;
        for(int k = i; (k < n && k < i+m); ++k){
            aux+= s[k];
        }
        if(aux == d){
            cant++;
        }
    }

    return cant;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, m;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    cin >> k >> m;
    cout << birthday(nums, k, m);

}
