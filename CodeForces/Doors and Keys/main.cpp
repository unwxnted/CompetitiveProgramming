#include <bits/stdc++.h>

using namespace std;

void solve(string str)
{
    vector <bool> llaves (3);

    for(auto i : str)
    {

        switch(i)
        {

        case 'r':
            llaves[0] = true;
            break;

        case 'g':
            llaves[1] = true;
            break;

        case 'b':
            llaves[2] = true;
            break;


        case 'R':
        {
            if(llaves[0] == false)
            {
                cout << "NO" << endl;
                return;
            }
            break;


        }


        case 'G':
            if(llaves[1] == false)
            {
                cout << "NO" << endl;
                return;
            }
            break;

        case 'B':
            if(llaves[2] == false)
            {
                cout << "NO" << endl;
                return;
            }
            break;



        }

    }
    cout << "YES" << endl;

}


int main()
{

    int n;
    cin >> n;

    for(int o = 0; o < n; ++o)
    {

        string str;
        cin >> str;

        solve(str);



    }



    return 0;
}
