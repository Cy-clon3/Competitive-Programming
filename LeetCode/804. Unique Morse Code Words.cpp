// https://leetcode.com/problems/unique-morse-code-words/submissions/
// Runtime: 8 ms, faster than 100.00% of C++ online submissions for Unique Morse Code Words.

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}, mores;
        set<string> rt;
        for(auto word : words){
            mores = "";
            for(auto c : word){
                mores += arr[c-97];
            }
            rt.insert(mores);
        }
        return rt.size();
    }
};
