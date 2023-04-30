#include <bits/stdc++.h>

using namespace std;

vector<int> getPrimes(int n) {
    vector<bool> isPrime(n+1, true);
    vector<int> primes;

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int solve(int k, vector<int> facts){
    int sum = k;
    int i = 0;
    while(k>1){
        if(k%facts[i]== 0){
            k/=facts[i];
            sum+=k;
        }else{
            i++;
        }
    }
    return sum;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    vector<int> nums = v;
    sort(nums.begin(), nums.end());
    vector<int> facts = getPrimes(nums[n-1]);
    vector<int> ans;

    for(int i = 0; i < n; ++i){
        ans.push_back(solve(v[i], facts));
    }

    for(auto i : ans) cout << i << " ";

    return 0;
}
