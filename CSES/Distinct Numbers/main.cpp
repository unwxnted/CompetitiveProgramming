#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
 
 
    int cant;
    cin >> cant;
 
    vector <int> nums;
    int aux;
 
    for(auto i = 0; i < cant; ++i)
    {
        cin >> aux;
        nums.push_back(aux);
    }
 
 
    sort(nums.begin(), nums.end());
    int cont = 0;
    for(int i = 0; i < cant; ++i)
    {
        if(i == 0)
        {
            cont++;
        }
        else
        {
 
            if(nums[i] != nums[i-1])
            {
                cont++;
            }
 
        }
 
    }
 
    cout << cont;
 
    in.close();
    out.close();
 
 
    return 0;
}