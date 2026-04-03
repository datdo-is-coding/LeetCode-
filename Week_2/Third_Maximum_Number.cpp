#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums = {6,2,6,5,1,2};
	if(nums.size() <3) cout<<nums[nums.size()-1]<<endl;
	sort(nums.begin(),nums.end());
	int flag = 0;
	for(int i = nums.size() - 1; i>0; i--){
		if(nums[i] != nums[i-1]) flag++;
		if(flag == 2){
			cout<<nums[i-1]<<endl;
			return 1;
		}
	}
	cout<<nums[nums.size()-1]<<endl;	
	return 0;
}
