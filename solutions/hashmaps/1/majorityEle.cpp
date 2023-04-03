// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.
// Example 1:
//
// Input: nums = [3,2,3]
// Output: 3
// 
// Example 2:
// 
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
// Function signature: int majorityElement(const vector<int>& nums);

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int majorityEle(const vector<int>& nums){
    int majorityElement = 0;
    unordered_map<int,int> umap; // creates an unordered map
    for(int i=0;i<nums.size();i++)
        umap[nums[i]]++; // count map or frequency map which stores and updates
                        // values associated with keys 'i' from nums
    for(auto i: umap){
        if(i.second > ((nums.size()-1)/2))
            majorityElement = i.first;
    }
    return majorityElement;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityEle(nums)<<endl;
}