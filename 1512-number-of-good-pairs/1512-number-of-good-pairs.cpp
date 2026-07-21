class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> key;
        int sum = 0;
        for(int i = 0;i< nums.size();i++)
            key[nums[i]]++;
        for(auto i = key.begin(); i != key.end();i++)
            sum += (((i->second) * (i->second - 1)) / 2);
        return(sum);
    }
};