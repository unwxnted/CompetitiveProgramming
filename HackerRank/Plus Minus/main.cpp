#include <bits/stdc++.h>

using namespace std;

/**

5
1 1 0 -1 -1

**/

void plusMinus(vector<int> arr) {

    int p = 0;
    int m = 0;
    int z = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] > 0){
            p++;
        }else if(arr[i] < 0){
            m++;
        }else{
            z++;
        }
    }

    cout << (double)p/(p+m+z) <<endl <<  (double)m/(p+m+z) << endl << (double)z/(p+m+z);

}


int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    plusMinus(v);
    return 0;
}
