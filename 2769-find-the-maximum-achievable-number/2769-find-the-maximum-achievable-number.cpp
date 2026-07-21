// x output 
// we alawys assume x is bigger than num cuz it needs maximum possible value of x
// so techinalccy we need only to care about increase num
//and since that "increase or decrease x by 1, and simultaneously increase or decrease num by 1.""
// eq is x - t*1 = num + t*1 
// so x = num + 2*t
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return(num + 2*t);
    }
};