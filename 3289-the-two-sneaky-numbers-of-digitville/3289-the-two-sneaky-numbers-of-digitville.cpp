class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map <int,int> key;
        vector <int> out;
        for(int i = 0;i< nums.size();i++)
            key[nums[i]]++;
        for(auto i = key.begin();i != key.end() ;i++)
            if (i->second > 1)
                out.push_back(i->first);
        return(out);
    }
};