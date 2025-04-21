
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int r = height.size()-1;
        int amount = 0;

        while (r>l) {
            int h =  min(height[l],height[r]);
            int w = r-l;
            int area = w*h;
            amount = max(area, amount);
            if (height[l] > height[r])
            {
                r--;
            }
            else if(height[l] < height[r])
            {
                l++;
            }
            else
            {
                l++;
                r--;
            }
        }
    return amount;
        
    }
};
