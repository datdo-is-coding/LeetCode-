#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> candies ={ 4, 2, 1, 1, 2};
    int extra = 1;
    int n = candies.size();
    bool array[n];
    int max = *max_element(candies.begin(),candies.end());
    for(int i = 0; i < n; i++){
        array[i] = (candies[i]+extra <= max) ? false : true;
    }
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}