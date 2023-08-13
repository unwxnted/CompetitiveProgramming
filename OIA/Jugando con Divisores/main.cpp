#include <bits/stdc++.h>

using namespace std;

vector<int> getPrimes(int n)
{
    vector<bool> isPrime(n+1, true);
    vector<int> primes;

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i*i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

void solve(int n, int SM, bool m)
{
    SM = n+1;
    vector<int> primes = getPrimes(n);
    sort(primes.begin(), primes.end());
    int k = primes.size()-1;
    int j = 0;
    while(n > 1)
    {
        if(m)
        {
            if(n%primes[k] == 0)
            {
                SM+=(n/primes[k]);
                n/=primes[k];
                m=!m;

            }
            else
            {
                k--;
            }
        }else{

            if(n%primes[j] == 0)
            {
                SM+=(n/primes[j]);
                n/=primes[j];
                m=!m;

            }
            else
            {
                j++;
            }
        }
    }

    cout << SM-1 << " ";


}

int main()
{
    int n;
    int SM;
    bool m = false;
    cin >> n;
    solve(n, SM, !m);
    solve(n, SM, m);

    return 0;
}
