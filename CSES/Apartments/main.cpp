#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, m, d;
 
    cin >> n >> m >> d;
 
    vector <long long> a;
    vector<long long> b;
 
    long long o;
    for(long long i = 0; i < n; ++i)
    {
        cin >> o;
        a.push_back(o);
    }
 
    for(long long i = 0; i < m; ++i)
    {
        cin >> o;
        b.push_back(o);
    }
 
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
 
    long long contA = 0;
    long long contB = 0;
    long long dn;
    long long p;
 
    while (contA < a.size() && contB < b.size()){
        dn = a[contA] - b[contB];
        if(dn < 0)
            dn = -1*(dn);
 
        if(dn <= d){
         p++;
         contA++;
         contB++;
        }else{
 
            if(a[contA] > b[contB]){
                contA++;
            }else{
                contB++;
            }
 
        }
 
    }
 
    cout << p;
 
    return 0;
}