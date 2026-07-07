class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int,int> key;
        for(int i = 0;i<nums.size();i++)
            key[nums[i]]++;
        for(auto ire = key.begin();ire != key.end();ire++)
            if (ire->second % 2 != 0)
                return(false);
        return(true);
    }
};