#include <bits/stdc++.h>

using namespace std;

/// pendiente

void solve()
{

    int n;
    cin >> n;
    if((n*(n+1)/2) % 2 != 0)
    {
        cout << "NO";
        return;
    }
    vector <int> nums;
    vector <int> v1;
    vector <int> v2;
    for(int i = 1; i <= n; ++i)
    {
        nums.push_back(i);
    }

    float medio = float(nums.size())/2+1.5;
    int primero = nums[0];
    int ultimo = nums.size();
    int limit = ((n*(n+1)/2)/2);

    int suma = medio + primero + ultimo;
    v1.push_back(primero);
    v1.push_back(medio);
    v1.push_back(ultimo);
    for(int i = 0; i < nums.size(); ++i){

        if(nums[i] != primero && nums[i] !=medio && nums[i] !=ultimo && suma < limit){
            suma+=nums[i];
            v1.push_back(nums[i]);
        }

        if(nums[i] != primero && nums[i] !=medio && nums[i] !=ultimo && suma >= limit){
            v2.push_back(nums[i]);
        }

    }
    cout << v1.size() << endl;
    for(auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v2.size() << endl;

    for(auto i: v2)
    {
        cout << i << " ";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
