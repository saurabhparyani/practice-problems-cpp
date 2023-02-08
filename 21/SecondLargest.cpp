// WAF that takes in a 1D array 'a' as input
// and returns the second largest distinct element
// from the array

// O(NlogN) method

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int second_max_21(int a[], int n){
    sort(a,a+n,greater<int>()); //descending order
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int max = a[0];
    int cmax = 0; //counts the number of times the largest element is repeated
    for(int i=0;i<n;i++){
        if(a[i] == max)
            cmax++;
    }
    return a[cmax];
}

int main(){
    int a[] = {12,35,1,10,34,1,35,35,35};
    int n = sizeof(a)/sizeof(int);
    cout<<second_max_21(a,n);
}