// Write a function that takes a vector of integers and returns
// an unordered_map that maps each distinct integer to its frequency in the vector.
//  Function signature: unordered_map<int, int> freqMap1(const vector<int>& nums);

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

unordered_map<int,int> freqMap1(const vector<int>& nums){
    unordered_map<int,int> umap; // creates an unordered map
    for(int i=0;i<nums.size();i++)
        umap[nums[i]]++; // count map or frequency map which stores and updates
                        // values associated with keys 'i' from nums
    return umap; // return the map created
}

int main(){
    vector<int> nums = {2,1,4,4,3,5,1,1,2,3,3,3,5};
    unordered_map<int,int> umap = freqMap1(nums); // store the result of freqMap1 in umap
    for(auto i: umap)
        cout<<i.first << ": " <<i.second<<endl;
}