#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n, s;
    vector <int> v(n);

    cin >> n >> s;

    for(int i = 0; i < n; ++i)
        cin >> v[i];

    
    int sum = 0;
    for(auto i : v){
        sum+= i;
    }


    int c = 0;
    int k = n-1;

    int steps = 0;

    if(s == sum){
        cout << steps << endl;
        return;
    }

    while(c < n && k > 0 && sum > s){

        if(v[c] == 1){
            steps++;
            sum--;
            c++;
        }

        if(sum <= s){
            break;
        }

        if(v[k] == 1){
            steps++;
            sum--;
            k--;
        }


    }

    cout << steps << endl;

}


int main(){

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    solve();
}