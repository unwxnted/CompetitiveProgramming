#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{

    int a = 0;
    int b = 0;

    int cont = 0;
    for(int f = 0; f < arr.size(); ++f)
    {
        a+= arr[f][cont];
        cont++;
    }


    cont = 0;
    for(int f = arr.size()-1; f >= 0; --f)
    {
        b+= arr[f][cont];
        cont++;
    }


    return max(a, b) - min(a, b);


}

int main()
{

    int n;
    cin >> n;
    vector <vector<int>> m (n);
    for(int i = 0; i < n; ++i)
    {
        m[i].resize(n);
    }

    for(int i = 0; i < n; ++i)
    {
        for(int c = 0; c<  n; ++c)
        {
            cin >> m[i][c];
        }
    }

    //cout << "no problem" << endl;
    cout << diagonalDifference(m);

}
