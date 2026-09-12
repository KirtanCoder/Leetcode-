class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int maxwater =0;

        while(i<j){
            int width = j-i;
            int h = min(height[i],height[j]);
            int area = width*h;
            maxwater = max(maxwater,area);

            if(height[i]<height[j]){
                i++;
            }
            else {
                j--;
            }
        }

        return maxwater;
    }
};