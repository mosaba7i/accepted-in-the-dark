int tosec(string s)
{
    int sum = stoi(s.substr(0,2)) * 3600;
    sum += stoi(s.substr(3,2)) * 60;
    sum += stoi(s.substr(6,2));
    return(sum);
}
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        return(tosec(endTime) - tosec(startTime));
    }
};