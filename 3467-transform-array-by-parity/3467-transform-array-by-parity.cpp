class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd = 0;
        vector<int> out;
        for(int i = 0;i<nums.size();i++)
            if(nums[i] % 2 == 0)
                out.push_back(0);
            else
                odd++;
        while(odd--)
            out.push_back(1);
        return(out);

    }
};