class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> key;
        for(int i = 0; i< nums.size();i++)
            key.insert(nums[i]);
        while (key.count(original))
            original *= 2;
        return(original);
    }
};