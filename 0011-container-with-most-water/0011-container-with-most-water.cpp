//I feel so proud solving this :>
class Solution {
public:
    int maxArea(vector<int>& height) {
       int i =0;
       int j = height.size() - 1;
       int area = 0;
       int heightt = 0;
       int width = 0;
       while (i < j)
       {
        
            heightt = min (height[i],height[j]);
            width = abs(i - j);
            if (width * heightt > area)
                area = width * heightt;

            if (height[i] >height[j])
                j--;
            else if (height[i] <= height[j])
                i++;
       }
        return(area);

    }
};
