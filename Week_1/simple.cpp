#include <iostream>

using namespace std;

int main(){
    int m,n;cin>>m>>n;
    int a[m];
    int b[n];

    for(int i=0;i<m;i++){cin>>a[i];}
    
    for(int i=0;i<n;i++){cin>>b[i];}

    int c[m+n];
    int i = m-1, j = n -1;
    int k = m+n-1;
    while(k>=0){
        if(i>=0){   }
    }
    cout<<endl;
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}