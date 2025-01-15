#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<vector<int>>& matrix;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i]==0){
                (matrix.begin(),matrix.end())=0;
            }
        }
        for(auto it : matrix){
            cout<<*it<<" ";
        }
}