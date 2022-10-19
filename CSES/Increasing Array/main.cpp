#include <iostream>
#include<vector>

using namespace std;

int main()
{

    long long n, aux;
    cin >> n;
    vector <long long> nums;
    for(long i = 0; i < n; ++i){
        cin >> aux;
        nums.push_back(aux);
    }

    long long diff = 0;
    int i = 1;

    while(i < nums.size()){

        if(nums[i] < nums[i-1]){
            diff+= nums[i-1]-nums[i];
            nums[i]+=(nums[i-1]-nums[i]);
        }
        i++;

    }
    cout << diff;

    return 0;
}
