class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> key;
        for(int i = 0; i < bulbs.size();i++)
            if(key.count(bulbs[i]))
                key.erase(bulbs[i]);
            else
                key.insert(bulbs[i]);
        vector<int> out = {key.begin(),key.end()};
        return(out);
    }
};