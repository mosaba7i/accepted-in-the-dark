class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int left = 0;
       vector<int> out;
       for(int i = 0; i < nums.size();i++)
       {
        out.push_back(left+nums[i]);
        left+=nums[i];
       }
       return(out); 
    }
};