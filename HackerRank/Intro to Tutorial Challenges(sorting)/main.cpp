#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector<int> arr) {

    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] == V){
            return i;
        }
    }

    return -1;

}


int main()
{
   int v, n;
   cin >> v;
   cin >> n;
   vector <int> k(n);
   for(int i = 0; i < n; ++i)
    cin >> k[i];
   cout << introTutorial(v, k);
    return 0;
}
