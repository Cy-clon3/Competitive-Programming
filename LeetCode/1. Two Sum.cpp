// https://leetcode.com/problems/two-sum/
// Runtime: 12 ms, faster than 98.56% of C++ online submissions for Two Sum.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> tmp;
        vector<int> rt;
        for(int i=0; i<(int)nums.size(); i++){
            if(tmp.find(target - nums[i]) != tmp.end()){
                rt = {tmp[target - nums[i]], i};
                return rt;
            }
                tmp[nums[i]] = i; 
        }
        return rt;
    }
};
