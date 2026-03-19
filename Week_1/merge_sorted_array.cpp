#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int m;cin>>m;
    int n;cin>>n;
    vector<int> nums1 = vector<int>(m+n);
    for(int i=0;i<m;i++){
        int x;cin>>x;
        nums1.at(i) = x;
    }
    vector<int> nums2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        nums2.push_back(x);
    }

    int k = m+n-1;
    int i = m - 1;
    int j = n - 1;
    while(j>=0){
        if(i>=0&&nums1[i]>nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}