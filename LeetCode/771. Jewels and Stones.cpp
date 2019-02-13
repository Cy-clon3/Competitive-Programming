// https://leetcode.com/problems/jewels-and-stones/
// Runtime: 8 ms, faster than 99.33% of C++ online submissions for Jewels and Stones.

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int c = 0;
        for(int i=0; i<S.size(); i++){
            if(J.find(S[i]) != string::npos)
                c++;
        }
        return c;
    }
};
