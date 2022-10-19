#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b)
{
    stack<int> s;
    stack <int> nums;

    for(int i = a[a.size()-1]; i <= b[0]; ++i)
    {
        s.push(i);

    }

    int cont = 0;
    while(!s.empty())
    {
        cont = 0;
        for(int j = 0; j < a.size(); ++j)
        {
            if(s.top() % a[j] == 0)
            {
                cont++;
            }
        }

        if(cont == a.size())
        {
            nums.push(s.top());
        }
        s.pop();
    }

    vector <int> lastest;



    while(!nums.empty())
    {
        cont = 0;
        for(int j = 0; j < b.size(); ++j)
        {
            if(b[j] % nums.top() == 0)
            {
                cont++;
            }
        }

        if(cont == b.size())
        {
            lastest.push_back(nums.top());
        }
        nums.pop();
    }


    return lastest.size();
}


int main()
{
    int n, m, j, l;

    cin >> n >> m;

    vector <int> a;
    vector <int> b;

    for(int i = 0; i < n; ++i)
    {
        cin >> j;
        a.push_back(j);
    }

    for(int i = 0; i < m; ++i)
    {
        cin >> l;
        b.push_back(l);
    }

    cout << getTotalX(a, b);

    return 0;
}
