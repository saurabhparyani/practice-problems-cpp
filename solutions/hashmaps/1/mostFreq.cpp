// Write a function that takes a vector of positive integers 
// (which can contain duplicates) and returns the integer that occurs the most number of times. 
// If there is no clear winner, return any of competing leaders. If the vector is empty, return 0.   
// Function signature: int mostFrequent(const vector<int>& nums)

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int mostFrequent(const vector<int>& nums){
    unordered_map<int,int> count;
    for(int i=0;i<nums.size();i++)
        count[nums[i]]++;
    int max = INT_MIN;
    int ans = -1;
    for(auto i: count){ // traverse through the count hashmap
        if(i.second > max){
            max = i.second;
            ans = i.first;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,2,3,3,3,4,4,4,4,5,5,6,6,6};
    cout<<mostFrequent(nums)<<endl;
}