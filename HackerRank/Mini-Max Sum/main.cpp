#include <bits/stdc++.h>

using namespace std;

/**

5
1 2 3 4 5

5
1 3 5 7 9

5
7 69 2 8974 221

**/

void miniMaxSum(vector<int> arr) {

    long long mins = 0;
    long long maxs = 0;

    sort(arr.begin(), arr.end());

    for(long long i = 0; i < arr.size(); ++i){
        if(i != arr.size()-1){
            mins+= arr[i];
        }

        if(i != 0){
            maxs+= arr[i];
        }
    }

    cout << mins << " " << maxs;

}

int main()
{

    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    miniMaxSum(v);

    return 0;
}
