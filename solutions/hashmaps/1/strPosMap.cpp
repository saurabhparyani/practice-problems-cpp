// Write a function that takes a vector of strings and returns an unordered_map 
// that maps each string to a vector of integers representing the positions 
// where the string occurs in the input vector.  
// Function signature: unordered_map<string, vector<int>> strPosMap(const vector<string>& strs);

#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

unordered_map<string,vector<int>> strPosMap(const vector<string>& strs){
    unordered_map<string,vector<int>> umap;
    for(int i=0;i<strs.size();i++)
        umap[strs[i]].push_back(i);
    return umap;
}

int main(){
    vector<string> strs = {"hi","bye","hi","hi","ok","bye","hi"};
    unordered_map<string,vector<int>> umap = strPosMap(strs);
    for(auto i: umap){
        cout<<i.first<<": ";
        for(int j=0;j<(i.second).size();j++)
            cout<<(i.second)[j];
        cout<<endl;
    }
}
