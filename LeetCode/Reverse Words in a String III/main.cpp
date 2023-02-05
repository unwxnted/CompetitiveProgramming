#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{

    vector<string> v;
    string aux = "";

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] != ' ')
        {
            aux+=s[i];
        }

        if(s[i] == ' ' || i == s.size()-1)
        {

            v.push_back(aux);
            aux = "";


        }
    }

    string t = "";
    int medium;
    int j;
    int k;

    for(int i = 0; i < v.size(); ++i)
    {
        medium = (v[i].size()+1)/2;
        j = 0;
        k = v[i].size()-1;

        while(j <= medium && k >= medium)
        {
            swap(v[i][j], v[i][k]);
            j++;
            k--;

        }

    }


    for(int i = 0; i < v.size(); ++i){
        if(i != v.size()-1){
            t+=v[i]+" ";
        }else{
            t+=v[i];
        }
    }


    return t;

}


int main()
{

    string s;
    cin >> s;
    string l = reverseWords(s);
    cout << l << endl;

    return 0;
}
