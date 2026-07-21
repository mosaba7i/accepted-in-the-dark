class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sums = 0;
        for(int i =0; i < nums.size();i++)
        {
            if (i % 2 == 0)
                sums += nums[i];
            else if (i % 2 != 0)
                 sums -= nums[i];
        }
        return(sums);
    }
};