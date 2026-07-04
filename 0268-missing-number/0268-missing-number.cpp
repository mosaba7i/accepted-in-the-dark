class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set <int> key;
        for (int i = 0; i < nums.size();i++)
            key.insert(nums[i]);
        for (int i = 0; i <= nums.size();i++)
        {
            if (!key.count(i))
                return(i);
        }
        return(-1);
    }
};