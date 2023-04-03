/* Given an integer array nums, return true if any value appears at least twice in the array, 
 and return false if every element is distinct.

 Example 1:

 Input: nums = [1,2,3,1]
 Output: true

 Example 2:

 Input: nums = [1,2,3,4]
 Output: false

 Example 3:

 Input: nums = [1,1,1,3,3,4,3,2,4,2]
 Output: true
 Function signature: bool containsDuplicate(const vector<int>& nums); */

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool containsDupli(const vector<int>& nums){
    unordered_map<int,int> umap; // creates an unordered map
    for(int i=0;i<nums.size();i++)
        umap[nums[i]]++; // count map or frequency map which stores and updates
                        // values associated with keys 'i' from nums
    for(auto i: umap){
        if(i.second > 1)
            return true;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4};
    cout << (containsDupli(nums) ? "true" : "false");
}