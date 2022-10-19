#include <bits/stdc++.h>

using namespace std;

/**

4 40
1 1 1 3

**/

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> songs(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> songs[i];
    }

    int time = 0;
    int rests = 0;
    int jokes = 0;

    for(int i = 0; i < songs.size(); ++i)
    {

        time+=songs[i];
        if(i != songs.size()-1)
        {
            time+=10;
            rests++;
        }
    }

    if(time > m)
    {
        cout << -1 << endl;
        return 0;
    }

    jokes = rests*2;

    while(time < m)
    {
        if(!(m-5< time)){
            time+=5;
            jokes++;
        }else{
            cout << jokes;
            return 0;
        }


    }

    cout << jokes;


    return 0;
}
