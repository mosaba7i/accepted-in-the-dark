//another sol
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> s(nums.size()*2);
        for(int i =0;i<nums.size();i++)
    {
            s[i] = nums[i];
            s[i + nums.size()] =nums[i];
    }
        return(s);
    }
};