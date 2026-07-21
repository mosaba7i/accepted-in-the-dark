// can use temp val to store nums so we don't alter it's values but i chose not tounless someone else asks to do so :)
class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        for(int i =0;i<nums.size();i++)
        {
           int sum = 0;
           for(;nums[i];nums[i] = nums[i]/10)
                sum += nums[i] % 10;
            if(sum < min)
                min = sum;
        }
        return(min);
        }
};