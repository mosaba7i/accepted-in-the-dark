// updated 2 -> (optimized (less code new idea same o(n) time compx)
// used idea of left and right cumulative var  

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        int r = 1;
       vector<int> prod(n,1);
       for (int i = 0;i<n;i++)
       {
        prod[i] *= l;//1,1,2,6
        l= l*nums[i];//1,2,6,24(x)
       }
       for (int i = n-1;i>=0;i--)
       {
        prod[i] *= r;
        r= r*nums[i];
       }
        return(prod);
    }
};