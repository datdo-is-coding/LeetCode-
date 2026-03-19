#include<iostream>
#include <map>
using namespace std;

int main(){
    int x=0,y=0;
    map<char,short> M = {{'U',-1},{'D',1},{'L',-1},{'R',1}};
    string moves;
    for(int i = 0 ;i < moves.length() ;i++){
        switch(moves[i]){
            case 'U':
                y--;
                break;
            case 'D':
                y++;
                break;
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
        }
    } 
    return x == 0 && y == 0;
    return 0;
}