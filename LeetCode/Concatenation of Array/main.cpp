#include <bits/stdc++.h>

using namespace std;

vector <int>getConcatenation(vector<int>& nums){

    int n = nums.size()*2;

    vector<int> k (n);
    int cont = 0;
    for(int i = 0; i < n; ++i){
        if(cont != nums.size()){
            k[i] = nums[cont];
            cont++;
        }else{
            cont = 0;
            k[i] = nums[cont];
            cont++;
        }

    }

    return k;

}

int main()
{

    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
   getConcatenation(nums);
    return 0;
}
