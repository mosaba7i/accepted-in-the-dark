class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> inter;
        unordered_set<int> set1;
        for (int i = 0;i < nums1.size();i++)
            set1.insert(nums1[i]);
        for (int i = 0;i < nums2.size();i++)
            if (set1.count(nums2[i]))
                inter.insert(nums2[i]);
        vector<int> output_inter(inter.begin(),inter.end());
        return(output_inter);

    }
};