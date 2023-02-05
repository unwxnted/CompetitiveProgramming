#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    nums1.resize(m);
    nums2.resize(n);


    nums1.resize(m+n);

    int cont = 0;

    for(int i = 0; i < m; ++i){

        nums1[cont] = nums1[i];
        cont++;

    }

    for(int i = 0; i < n; ++i){
        nums1[cont] = nums2[i];
        cont++;
    }

    sort(nums1.begin(), nums1.end());
}

int main()
{
    int n, m;
    cin >> m >> n;
    vector <int> v(m);
    vector <int> j(n);

    for(int i = 0; i < m; ++i){
        cin >> v[i];
    }


    for(int i = 0; i < n; ++i){
        cin >> j[i];
    }


    Merge(v, m, j, n);

    for(int i = 0; i < m; ++i){
        cout << v[i] << " ";
    }

    cout << endl;


    return 0;
}
