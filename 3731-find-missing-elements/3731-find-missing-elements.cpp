class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> key;
        vector <int> out;
        int min = nums[0];
        int max = nums[0];
        for(int i = 0; i < nums.size();i++)
        {
            key.insert(nums[i]);
            if ( nums[i] > max)
                max = nums[i];
            if ( nums[i] < min)
                min = nums[i];
        }
            
        for(int i = min; i <= max;i++)
            if (!key.count(i))
                out.push_back(i);
        return(out);
    }
};