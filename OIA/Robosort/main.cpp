#include <bits/stdc++.h>

using namespace std;

bool sorted(vector<int> v){
    vector<int>aux = v;
    sort(aux.begin(), aux.end());
    if(aux==v)return true;
    return false;
}

vector<int> robosort(int n, vector<int> v){
    vector<int> res;
    vector<int> aux=v;
    map<int,int> m;
    sort(aux.begin(), aux.end());
    int p=0;
    int k=0;
    int l;
    int r;
    while(!sorted(v)){
        m.clear();
        for(int i = 0;i<n; ++i){
            m[v[i]]=i;
        }
        p=m[aux[k]];
        l=k;
        r=p;
        while(l<=r){
            swap(v[l], v[r]);
            l++;
            r--;
        }
        k++;
        res.push_back(p+1);
    }
    m.clear();
    for(int i = 0;i<n; ++i){
        m[v[i]]=i;
    }
    p=m[aux[k]];
    res.push_back(p+1);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n; ++i){
        cin >> v[i];
    }
    vector<int> r = robosort(n, v);
    for(auto i : r) cout << i << " ";
    cout << endl;
    return 0;
}
