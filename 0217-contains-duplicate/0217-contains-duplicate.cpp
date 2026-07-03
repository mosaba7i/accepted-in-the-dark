class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> key;
        for(int i = 0;i < nums.size();i++)
        {
            if(key.count(nums[i]))
                return(true);
            key.insert(nums[i]);
        }
        return(false);
    }
};