class Solution {
public:
    string defangIPaddr(string address) {
        string out;
        for(int i = 0;i<address.size();i++)
            if(address[i] == '.')
                out += "[.]";
            else
                out.push_back(address[i]);
        return(out);
    }
};