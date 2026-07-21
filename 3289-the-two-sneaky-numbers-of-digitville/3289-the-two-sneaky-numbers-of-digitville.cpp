// broo maybe mapping isn't good here i think  freq vector z better
// [0,0,0,0]
// 
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> key(nums.size(), 0);
        vector<int> out;

        for (int i = 0; i < nums.size();i++) {
            int x = nums[i];
            if (++key[x] >= 2)
                out.push_back(x);
        }

        return out;
    }
};