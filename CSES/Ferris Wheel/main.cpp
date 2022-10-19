#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/**

4 10
7 2 8 10


**/


/// pendiente
void solve()
{

    ll n, m;
    cin >> n >> m;
    vector <int> nums(n);
    set <int> s;
    for(int i = 0; i < n; ++i)
    {
        cin >> nums[i];
        s.insert(nums[i]);
    }

    ll total = 0;
    ll borradosA = 0;
    ll borradosB = nums.size()-1;
    ll cont = nums.size()-1;
    ll i = 0;
    bool h = true;

    while(cont >= 0 && i < nums.size())
    {
        h = true;
        if(nums[i]+nums[cont] <= m)
        {
            total++;
            i++;
            cont--;
        }
        else
        {
            if(nums[i] == m)
            {
                total++;
                i++;
            }
            else
            {
                h = false;
            }

            if(nums[cont] == m)
            {
                total++;
                cont--;
            }
            else
            {
                h = false;
            }

            if(!h)
            {
                if(nums[cont] < nums[i])
                {
                    i++;
                }
                else
                {
                    cont--;
                }
            }
        }
    }

    cout << total;


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
