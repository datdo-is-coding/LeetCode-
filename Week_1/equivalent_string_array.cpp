#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> word1,word2;
    word1.push_back("a");
    word1.push_back("bc");
    word2.push_back("ab");
    word2.push_back("c");
    string w1 = "",w2 = "";
    for(int i = 1 ; i < word1.size() ; i++){
        word1[0]+=word1[i];
    }
    for(int i = 0 ; i < word2.size() ; i++){
        word2[0]+=word2[i];
    }
    cout<<word1[0]<<endl;
    cout<<word2[0]<<endl;
    cout<<(word1[0] ==  word2[0])<<endl;
}