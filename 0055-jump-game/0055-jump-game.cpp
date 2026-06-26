class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool status = 0;
       vector<bool> visited(nums.size(), false);
        function<void(vector<int>&,int)> bt = [&](vector<int>& nums, int i)
        {
            if (status || (i < nums.size() && visited[i]))
                return;
            int get_num = nums[i];
            visited[i] = 1;
            int j = 1;
            if (i == nums.size()-1)
            {
                    status = 1;
                    return;
            }
            while (i + j < nums.size() && j <= get_num)
            {
                if (!visited[i+j])
                    bt(nums,i+j); 
                if(status)
                    return; 
                j++;
            }

        } ;
        bt(nums,0);
        return(status);
    }
};