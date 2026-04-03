#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums = {6,2,6,5,1,2};
	sort(nums.begin(),nums.end());
	int sum = 0;
	for(int i = 0; i< nums.size(); i+=2){
		sum += nums[i];
	}
	cout<<sum<<endl;	
	return 0;
}
