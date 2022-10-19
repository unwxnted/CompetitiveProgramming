#include <bits/stdc++.h>

using namespace std;

/**

5
3 1 3 2 3

**/

int birthdayCakeCandles(vector<int> candles) {

    sort(candles.rbegin(), candles.rend());
    long long maxn = candles[0];
    long long cant = 0;

    for(int i = 1; i < candles.size(); ++i){
        if(i == 1){
            cant++;
        }

        if(candles[i] == candles[i-1]){
            cant++;
        }else{
            break;
        }
    }

    return cant;


}

int main()
{

    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n ; ++i)
        cin >> v[i];
    cout << birthdayCakeCandles(v);

    return 0;
}
