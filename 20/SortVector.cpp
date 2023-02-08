// WAF that takes in a 2D vector 'v' and sorts
// all the rows. No need to return anything

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void sort_row_20(vector<vector<int>>& v){
    for(int i=0;i<v.size();i++){
        sort(v[i].begin(),v[i].end());
    }
}

int main(){
    vector<vector<int>> v = {{3,2,1},{6,5,4},{9,8,7}};
    sort_row_20(v);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}