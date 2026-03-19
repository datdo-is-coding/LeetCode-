#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map> 
using namespace std;

int main(){

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>> mp;
    for(int i = 0 ; i < strs.size() ;i++){
        string str = strs[i];
        sort(str.begin(),str.end());
        mp[str].push_back(strs[i]);
    }
    vector<vector<string>> res;
    for(auto& p:mp){
        res.push_back(p.second);
    }
}