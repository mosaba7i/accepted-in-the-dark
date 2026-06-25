
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      int i =0;
     unordered_map<int,int> key;
      while (i < nums.size())
      {
        if(key.find(nums[i]) != key.end() && i - key[nums[i]] <= k )
                return (true);
            else 
                key[nums[i]] =  i;
        i++;
      }
      return(false);
         
    }
};