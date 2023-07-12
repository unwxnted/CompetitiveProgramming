#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long, long long> v;
    long long f;
    for(long long i = 0; i < n; ++i) {
            cin >> f;
            v.insert({f, i});
    }
    long long k;
    cin >> k;
    long long vk;
    long long pv = 0;
    long long pp = 0;

    for(long long i = 0; i < k; ++i){
        cin >> vk;
        pv+=v[vk]+1;
        pp+=v.size()-v[vk];
    }

    cout << pv << " " << pp << endl;

    return 0;
}
