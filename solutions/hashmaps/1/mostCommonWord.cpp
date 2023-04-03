/* Given a string paragraph and a string array of the banned words banned, 
return the most frequent word that is not banned. 
It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.

 

Example 1:

Input: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]

Output: "ball"

Explanation: 
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.

Example 2:

Input: paragraph = "a.", banned = []

Output: "a"
Function signature: string mostCommonWord(string paragraph, const vector<string>& banned);
*/

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<sstream>
using namespace std;

string mostCommonWord(string paragraph, const vector<string>& banned){
      unordered_map<string, int> umap;
      int i=0;
        while(i < paragraph.size()){
            string s = ""; // string of words 
            while(i < paragraph.size() && isalpha(paragraph[i])) 
                s.push_back(tolower(paragraph[i++])); // add lowercase words of paragraph to s
            while(i < paragraph.size() && !isalpha(paragraph[i]))
                i++; // move forward
            umap[s]++; // populate umap with <s,freq>
        }
        for(auto i: banned) 
            umap[i] = 0; // initialize all banned words to 0.
        string res = "";
        int count = 0;
        for(auto i: umap) {
            if(i.second > count){
                res = i.first; 
                count = i.second;
            }
        }
        return res;  
}

int main(){
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};
    string most_common_word = mostCommonWord(paragraph, banned);
    cout << most_common_word << endl;
}