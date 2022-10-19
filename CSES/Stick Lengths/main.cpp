#include <bits/stdc++.h>

using namespace std;

void solve(){

    long long n;
    cin >> n;
    vector <long long> nums(n);
    for(long long i = 0; i < n; ++i) cin >> nums[i];

    sort(nums.begin(), nums.end());

    long long m = 0;
    long long j = nums.size()/2;

    for(int i= 0; i< n; ++i){
        m+= abs(nums[j]-nums[i]);
    }

    cout << m;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
