#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {0,1,3};
    int sum = nums.size()*(nums.size()+1)/2;
    for(int i = 0; i< nums.size();i++){
        sum-=nums[i];
    }
    cout << sum;
    return 0;
}