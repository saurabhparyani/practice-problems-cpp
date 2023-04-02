#  Hashmaps - 1

*Note: const keyword is used to ensure that the input vector is not modified within the function.*

1. Write a function that takes a vector of integers and returns an unordered_map that maps each distinct integer to its frequency in the vector.
&nbsp;
    Function signature:
    `unordered_map<int, int> freqMap1(const vector<int>& nums);`

---

2. Write a function that takes two vectors of integers and returns an unordered_map that maps each distinct integer in the first vector to its frequency in the second vector.
&nbsp; 
    Function signature:
    `unordered_map<int, int> freqMap2(const vector<int>& nums1, const vector<int>& nums2);`

---

3. Write a function that takes a vector of strings and returns an unordered_map that maps each distinct string to its length.
&nbsp; 
    Function signature:
    `unordered_map<string, int> strLengthMap(const vector<string>& strs);`

---

4. Write a function that takes a vector of positive integers (which can contain duplicates) and returns the integer that occurs the most number of times. If there is no clear winner, return any of competing leaders. If the vector is empty, return 0.
&nbsp;
    Function signature:
    `int mostFrequent(const vector<int>& nums)`

---

5. Write a function that takes a vector of strings and returns an unordered_map that maps each string to a vector of integers representing the positions where the string occurs in the input vector.
&nbsp;
    Function signature:
    `unordered_map<string, vector<int>> strPosMap(const vector<string>& strs);`

---

6.  Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

        Example 1:

        Input: nums = [3,2,3]
        Output: 3

        Example 2:

        Input: nums = [2,2,1,1,1,2,2]
        Output: 2

    Function signature:
    `int majorityElement(const vector<int>& nums);`

---

7. Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

        Example 1:

        Input: nums = [1,2,3,1]
        Output: true

        Example 2:

        Input: nums = [1,2,3,4]
        Output: false

        Example 3:

        Input: nums = [1,1,1,3,3,4,3,2,4,2]
        Output: true


    Function signature:
    `bool containsDuplicate(const vector<int>& nums);`

---


8. Write a function that takes a vector of integers as input and returns true if there are two distinct indices i and j such that nums[i] = nums[j], and |i - j| <= k, where k is a given integer. The function should have O(1) space complexity. Hint: use a hashmap to store the indices of previously seen element.
&nbsp;
    Function signature:
    `bool containsNearbyDuplicate(const vector<int>& nums, int k);`

---

9. Given two strings s and t, return true if t is an anagram of s, and false otherwise. An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

        Example 1:

        Input: s = "anagram", t = "nagaram"
        Output: true

        Example 2:

        Input: s = "rat", t = "car"
        Output: false

    Function signature:
    `bool isAnagram(string s, string t);`

---

10. Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

    The words in paragraph are case-insensitive and the answer should be returned in lowercase.

    &nbsp;
    


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
    
    Function signature:
    `string mostCommonWord(string paragraph, const vector<string>& banned);`