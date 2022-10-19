#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int num)
{
    string str = to_string(num);
    int cont = str.size();
    for(int i = 0; i < str.size(); ++i){
        cont--;
        if(str[i] != str[cont]){
            return false;
        }

    }
    return true;

}



int main()
{
    int num;
    cin >> num;
    cout << isPalindrome(num);

    return 0;
}
