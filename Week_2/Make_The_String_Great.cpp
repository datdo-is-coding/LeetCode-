#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s = "leEeetcode";
    
    stack<char> S;
    for(int i = 0; i < s.length();i++){
        if(S.size() < 1) S.push(s[i]);
        else{
            if(abs(s[i] - S.top()) == 32){
                S.pop();
            }
        }
    }
    string res = "";

    while(!S.empty()){
        res = S.top() + res;
        S.pop();
    }
    cout<< res << endl;
}