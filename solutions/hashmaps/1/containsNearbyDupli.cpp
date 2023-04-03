// Write a function that takes a vector of integers as input and returns true 
// if there are two distinct indices i and j such that nums[i] = nums[j], and |i - j| <= k, 
// where k is a given integer. The function should have O(1) space complexity. 
// Hint: use a hashmap to store the indices of previously seen element.   
// Function signature: bool containsNearbyDuplicate(const vector<int>& nums, int k);

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool containsDupli(const vector<int>& nums, int k){
    unordered_map<int,int> umap; // creates an unordered map
    for(int i=0;i<nums.size();i++){
        if(umap.count(nums[i])>0 && abs(i-umap[nums[i]])<=k)
            return true;
        
        umap[nums[i]] = i; // populate the umap. <element, index> pair as a <K,V>
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4,2,1,3,2};
    int k = 3;
    cout << (containsDupli(nums,k) ? "true" : "false");
}