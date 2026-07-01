// update 2 -> optimized (greedy solution )
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int distance = 0;
        int i = 0;
        while (i < nums.size())
        {
            if (i > distance)
                return(false);
            if (i + nums[i] > distance)
                distance = i + nums[i];
            i++;
        }
        return(true);
    }
};