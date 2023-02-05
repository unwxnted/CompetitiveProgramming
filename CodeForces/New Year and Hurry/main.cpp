#include <bits/stdc++.h>

using namespace std;


/// 50 5 10 15 20

void solve(){

    int n, m;

    cin >> n >> m;

    int time = 60*4;

    int s = 0;
    int c = 0;

    for(int i = 1; i < n+1; ++i){
        if((s + (i*5)) <= (time-m)){
            s = s + i*5;
            c++;
        }else{
            break;
        }

    }

    cout << c << endl;


}


int main()
{
    ios_base::sync_with_stdio(false);
    solve();

    return 0;
}
