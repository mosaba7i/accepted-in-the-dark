class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         unordered_set <int> key;
         int dup = 0;
         int missing = 0;
        for (int i = 0; i < nums.size();i++)
            {
                if(key.count(nums[i]))
                    dup = nums[i];
                key.insert(nums[i]);
            }
                
        for (int i = 1; i <= nums.size();i++)
        {
            if (!key.count(i))
                missing = i;
            if(missing && dup)
                break;
        }
        return{dup,missing};
    }
};