//update 2 -> optimized
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0;

    while (nums1.size() - m != 0 )
        nums1.pop_back();
    while (i < n)
        nums1.push_back(nums2[i++]);
    sort(nums1.begin(), nums1.end());
    }
};