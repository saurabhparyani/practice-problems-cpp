// WAF that takes in a 1D array 'a' as input
// and returns the second largest distinct element
// from the array

// O(N) method

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int second_max_21(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int max = INT_MIN;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
            pos = i;
        }
    }
    int pos1 = -1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[pos]){
            if(pos1 == -1)
                pos1 = i;
                
            if(a[i]>=a[pos1])
                pos1 = i;
        }
    }
    return a[pos1];
}

int main(){
    int a[] = {12,35,1,10,34,35,35,1};
    int n = sizeof(a)/sizeof(int);
    cout<<second_max_21(a,n);
}