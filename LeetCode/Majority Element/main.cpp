#include <bits/stdc++.h>

using namespace std;

/**

3
3 2 3

2 3 3

7
2 2 1 1 1 2 2


11
5 5 5 5 5 3 3 3 3 3 3

**/

int majorityElement(vector<int>& nums) {


    sort(nums.begin(), nums.end());

    int maxR = 0;
    int numR;
    int aux = 0;

    for(int i = 0; i < nums.size(); ++i){

        if(i == 0){
            aux++;
        }


        if(i != 0 && nums[i] ==  nums[i-1]){
            aux++;
        }

        if(i != 0 && nums[i] != nums[i-1]){

            if(aux > maxR){
                maxR = aux;
                numR = nums[i-1];
            }
            aux = 0;
            aux++;

        }

        if(i == nums.size()-1){
            if(aux > maxR){
                maxR = aux;
                numR = nums[i];
            }
        }



    }


    return numR;

}


int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; ++i)
        cin >> v[i];

    cout << majorityElement(v) << endl;


    return 0;
}
