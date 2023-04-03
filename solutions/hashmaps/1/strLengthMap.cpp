// Write a function that takes a vector of strings and 
// returns an unordered_map that maps each distinct string to its length.
// Function signature: unordered_map<string, int> strLengthMap(const vector<string>& strs);

#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

unordered_map<string,int> strLengthMap(const vector<string>& strs){
    unordered_map<string,int> umap;
    for(int i=0;i<strs.size();i++)
        umap.insert(make_pair(strs[i],strs[i].length()));

    return umap;
}

int main(){
    vector<string> strs = {"hi","bye","okay","among","us"};
    unordered_map<string,int> umap = strLengthMap(strs);
    for(auto i: umap)
    cout<<i.first<<": "<<i.second<<endl;
}