#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s = "){";
    stack<char> S;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['||s[i]=='('||s[i]=='{'){
            S.push(s[i]);
        }
        else{
            if(S.size()<1){
                cout<<"False";
                return 0; 
            }

            else if( (s[i]==']'&&S.top()!='[')||
                (s[i]==')'&&S.top()!='('||
                (s[i]=='}'&&S.top()!='{'))){
                    cout<<"wrong"<<endl;
                    return 0;
                }
            
        }
    }
    cout<<(S.size() == 0) <<endl;

    return 0;
}