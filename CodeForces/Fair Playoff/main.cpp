#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    for(int o = 0; o < cases; ++o)
    {

        vector <int> vec;
        int aux;
        for(auto i = 0; i < 4; ++i)
        {
            cin >> aux;
            vec.push_back(aux);
        }

        vector <int> winners;

        for(auto i = 1; i < 4; ++i)
        {
            if(i == 1 || i == 3)
            {
                if(vec[i] > vec[i-1])
                {
                    winners.push_back(vec[i]);
                }else{

                    winners.push_back(vec[i-1]);

                }
            }
        }
        sort(vec.begin(), vec.end(), greater<int>());
        sort(winners.begin(), winners.end(), greater<int>());

        auto justo = 0;
        for(auto i = 0; i < 2; ++i){
            if(vec[i] == winners[i]){
                justo++;
            }
       }

       if(justo == 2){
        cout << "YES" << endl;
       }else{
        cout << "NO" << endl;
       }


    }


    return 0;
}
