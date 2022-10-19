#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int contN= 0;
    int contM = 0;
    vector<int> valids1;
    vector<int> valids2;

    for(auto i : apples){
        valids1.push_back((a+i));
    }

    for(auto i : oranges){
        valids2.push_back((b+i));
    }

    for(auto i : valids1){
        if(i <= t && i >= s){
            contM++;
        }
    }

    for(auto i : valids2){
        if(i <= t && i >= s){
            contN++;
        }
    }

    cout << contM << endl << contN;


}

int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    vector <int> apples(m);
    vector <int> oranges(n);

    for(int i = 0; i < m; ++i){
        cin >> apples[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

}
