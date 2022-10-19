#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {

    int mn;
    int mx;
    int mnT = 0;
    int mxT = 0;

    for(int i = 1; i < scores.size(); ++i){
        if(i == 1){
            mn = scores[0];
            mx = scores[0];
        }

        if(scores[i] > mx){
            mx = scores[i];
            mxT++;
        }

        if(scores[i] < mn){
            mn = scores[i];
            mnT++;
        }
    }

    vector <int> res(2);
    res[0] = mxT;
    res[1] = mnT;

    return res;

}

int main()
{
    int n, aux;
    cin >> n;
    vector <int> nums;
    for(int i = 0; i < n; ++i){
        cin >> aux;
        nums.push_back(aux);
    }

    vector <int> res = breakingRecords(nums);
    for(int i = 0; i < 2; ++i){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
