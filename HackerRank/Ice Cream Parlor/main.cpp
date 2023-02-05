#include <bits/stdc++.h>

using namespace std;


vector<int> icecreamParlor(int m, vector<int> arr) {

    int n = arr.size();
    int pos1 = 3;
    int pos2 = 3;

    vector <int> v(2);
    int cont = 0;

    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(arr[i] + arr[j] == m){
                v[0] = j+1;
                v[1] = i+1;
                return v;
            }
        }
    }


    return v;
}

int main()
{
    int m, n;

    cin >> m >> n;

    vector <int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    vector <int> h = icecreamParlor(m, v);

    cout << h[0] << " " << h[1] << endl;


    return 0;
}
