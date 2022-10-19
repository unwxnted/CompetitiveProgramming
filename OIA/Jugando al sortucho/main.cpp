#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    vector <vector <int>> sortedNums(n);

    sort(nums.begin(), nums.end());

    int cont = 0;
    for(int i = 0; i < nums.size()-1; ++i)
    {

        if(i == 0)
        {
            sortedNums[cont].push_back(nums[i]);
        }

        if(nums[i] == nums[i+1])
        {
            sortedNums[cont].push_back(nums[i+1]);
        }
        else
        {
            cont++;
            sortedNums[cont].push_back(nums[i+1]);
        }

    }

    int cant;
    cont = 0;
    for(int i = 0; i < sortedNums.size(); ++i)
    {
        cant = sortedNums[i].size()/2;
        cont= 0;
        while(cont < cant)
        {

            sortedNums[i].erase(sortedNums[i].begin()+cont);
            cont++;
        }


    }

    vector <int> salida;

    int componentes = 0;
    for(int i = 0; i < sortedNums.size(); ++i)
    {
        componentes+=sortedNums[i].size();
    }

    cont = 0;
    while (componentes > 0)
    {

        for(int i = 0; i < sortedNums.size(); ++i)
        {
            if(sortedNums[i].size() > 0)
            {
                salida.push_back(sortedNums[i][0]);
                cout << salida[cont] << " ";

                sortedNums[i].erase(sortedNums[i].begin());
                componentes--;
                cont++;
            }
        }
    }

    return 0;
}
