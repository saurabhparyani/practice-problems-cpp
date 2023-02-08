// Given 2D array of integers 'a' having
// N*N elements, WAF to return a 2D vector 'v'
// that contains the tranpose of the array

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose_22(int a[][100], int n){
    int b[n][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            b[i][j] = a[j][i];
    }
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<n;j++)
            v1.push_back(b[i][j]);
        v.push_back(v1);
    }
    return v;
}

int main(){
    int a[][100] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int n = sizeof(a)/sizeof(a[0]);
    vector<vector<int>> v;
    v = transpose_22(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}