using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0;
    int size = nums1.size() - m;
    while (i < size )
    {
        nums1.pop_back();
        i++;
    }
    i = 0;
    size = nums2.size() - n;
    while (i < size)
    {
        nums2.pop_back();
        i++;
    }
    i = 0;
     size = nums2.size();
    while (i < size)
    {
        nums1.push_back(nums2[i]);
        i++;
    }
    sort(nums1.begin(), nums1.end());
    }
};