class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> out;
        unordered_set <int> key;
        for(int i=0;i<friends.size();i++)
        key.insert(friends[i]);
        for(int i=0;i<order.size();i++)
          if (key.count(order[i]))
              out.push_back(order[i]);
        return(out);
        
    }
};