// WAF that takes in a 2D vector 'v'
// and returns true if it is 
// a 2D matrix, with fixed rows and cols
// else returns false

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool check_2d_matrix_19(vector<vector<int>>& v){
    int c=0;
    int flag = 0;
    int c1 = v[0].size();
    for(int i=1;i<v.size();i++){
        c = v[i].size(); //c stores the row vector size
        if(c!=c1){
            flag = 0;
            break;
        }
        else
            flag = 1;
    }
    if(flag==0)
        return false;
    else
        return true;
}

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<(check_2d_matrix_19(v) ? "true" : "false");
}