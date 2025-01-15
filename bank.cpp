#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5,k=a*a-1;
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int z=k;z>=0;z--){
            cout<<"*";
        }
        cout<<endl;
        k-=2;
    }
}