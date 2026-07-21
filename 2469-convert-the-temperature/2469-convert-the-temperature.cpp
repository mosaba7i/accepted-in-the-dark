class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {
        (double)(celsius + 273.15),
        (double)(celsius * 1.80 + 32.00)
    };
    }
};