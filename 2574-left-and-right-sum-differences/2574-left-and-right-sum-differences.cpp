class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> leftSum(nums.size(),0);
        vector <int> outSum(nums.size(),0);
        int sum = 0;
        for(int i = 0; i < nums.size();i++)
        {
            leftSum[i] = sum;
            sum+=nums[i]; 
        }
        sum = 0;
        for(int i = nums.size() - 1; i > -1;i--)
        {
            outSum[i] = abs(sum - leftSum[i]);
            sum+=nums[i]; 
        }
        return(outSum);
    }
};