#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int aux;
    cin >> n;

    vector <int> nums(n+1, 0);

    for(int i = 0; i < n-1; ++i){
        cin >> aux;
        nums[aux] = 1;
    }

    for(int i = 1; i <= n; ++i){
        if(nums[i] == 0){
            cout << i;
        }
    }



    return 0;
}
