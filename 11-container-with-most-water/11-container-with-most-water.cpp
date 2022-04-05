class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int start = 0;
        int end = height.size()-1;
        while(start < end)
        {
             ans  = max(min(height[start],height[end])*(end-start),ans);
            if(height[start] > height[end])
            {
                end--;
            }else
            {
                start++;
            }
        }
       
        return ans;
        
    }
};