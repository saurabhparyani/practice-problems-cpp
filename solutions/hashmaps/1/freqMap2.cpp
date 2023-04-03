// Write a function that takes two vectors of integers and returns an unordered_map 
// that maps each distinct integer in the first vector to its frequency in the second vector.  
// Function signature:
//  unordered_map<int, int> freqMap2(const vector<int>& nums1, const vector<int>& nums2);

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

unordered_map<int,int> freqMap2(const vector<int>& nums1, const vector<int>& nums2){
    unordered_map<int,int> countMap; // creates an unordered map
    for(int i=0;i<nums2.size();i++)
        countMap[nums2[i]]++; // count map or frequency map which stores and updates
                              // values associated with keys 'i' from nums2
    unordered_map<int,int> umap; 
    for(int i=0;i<nums1.size();i++){
            if(countMap.find(nums1[i])!=countMap.end())
                umap[nums1[i]] = countMap[nums1[i]];
            else
                umap[nums1[i]] = 0;
    }

    return umap; // return the map created
}

int main(){
    vector<int> nums1 = {1,2,3,4,5,8};
    vector<int> nums2 = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5};
    unordered_map<int,int> umap = freqMap2(nums1,nums2); // store the result of freqMap1 in umap
    for(auto i: umap)
        cout<<i.first << ": " <<i.second<<endl;
}