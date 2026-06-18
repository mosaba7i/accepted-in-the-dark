
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int s = 0;
        s = nums.size();
        if (s == 1)
            return(nums[0]);
        while (i < s)
        {
            j = 0;
            while (j < s)
                {
                    if ( i != j)
                    {
                        if (nums[i] == nums[j])
                        break;
                    }

                    j++;
                    if (j == s)
                        return(nums[i]);
                }

            i++;
        }
        return(-1);
    }
};