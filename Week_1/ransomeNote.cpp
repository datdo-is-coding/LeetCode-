#include<iostream>
#include<map>

using namespace std;

int main(){
    string ransomNote = "a",magazine = "b";
    char m[26] = {0};
    for(int i=0;i<magazine.size();i++){
        m[magazine[i]-'a']++;
    }
    for(int i=0;i<ransomNote.size();i++){
        if(--m[ransomNote[i]-'a']<0) return false;
    }
    return true;
    return 0;
}