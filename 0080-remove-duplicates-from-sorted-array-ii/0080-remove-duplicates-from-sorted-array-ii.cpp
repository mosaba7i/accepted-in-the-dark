class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        while (i + 2 < nums.size()) // 0 < 3 , 1 < 3
        {
                while(i + 2 < nums.size() && (nums[i] == nums[i+1]  && nums[i+1] == nums[i + 2]) ) // 1 < 3, 2 < 2 
                    nums.erase(nums.begin() + i + 1); // [ 1 2 ]
                if (i + 2 < nums.size() && nums[i] != nums[i+2])
                    i++; // i = 1
        }
        return(nums.size());

    }
};