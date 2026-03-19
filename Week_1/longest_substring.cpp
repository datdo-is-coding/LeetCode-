#include<iostream>

using namespace std;

int main(){
    string s = "";
    int lastIndex[256] = {0};
    int left = 0; 
    int max_length = 0;
    for(int right = 0; right < s.size(); right++){
        if(lastIndex[s[right]] >=left){
            left = lastIndex[s[right]] + 1;
        }
        lastIndex[s[right]] = right;

        max_length = max(max_length,right - left + 1);
    }
    cout<<max_length<<endl;
    return 0;
}