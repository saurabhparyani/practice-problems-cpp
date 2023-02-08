// WAF that takes in a vector<vector<int>> &v as input 
// and returns the sum of all integer elements in it

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int sum_18(vector<vector<int>>& v){
    int s=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            s = s + v[i][j];
    }
    return s;
}

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<sum_18(v);
}