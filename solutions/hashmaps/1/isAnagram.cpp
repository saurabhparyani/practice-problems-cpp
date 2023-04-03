/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
 typically using all the original letters exactly once.

 Example 1:

 Input: s = "anagram", t = "nagaram"
 Output: true

 Example 2:

 Input: s = "rat", t = "car"
 Output: false
Function signature: bool isAnagram(string s, string t);
*/

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std; 

bool isAnagram(string s, string t){
    unordered_map<char, int> smap; 
    unordered_map<char, int> tmap;
    for(int i=0;i<s.size();i++){
        smap[s[i]]++; 
    }
    for(int i=0;i<t.size();i++){
        tmap[t[i]]++; 
    }
    if(smap == tmap)
        return true;
    else
        return false;
}

int main(){
    string s = "anagram", t = "nagaram";
    cout<<(isAnagram(s,t) ? "true" : "false");
}