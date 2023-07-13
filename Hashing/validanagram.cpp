/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once. */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map<char, int> sStore;
        unordered_map<char, int> tStore;

        for(int i = 0; i < s.size(); i++) {
            sStore[s[i]]++;
            tStore[t[i]]++;
        }

        for(int i = 0; i < sStore.size(); i++) {
            if(sStore[i] != tStore[i])
                return false;
        }
        return true;
    }
};