class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        int i = 0;
        int j = 0;
        vector<int> sum;
        while (i < s)
        {
            j = 0;
            while (j < s)
            {
                if(nums[i] + nums[j] == target && i != j)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                    return(sum);
                }
                j++;
            }
            i++;
        }
        return(sum);
    }
};