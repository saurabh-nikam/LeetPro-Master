class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>pre(n,0);
        vector<int>post(n,0);
        pre[0] = height[0];
        for(int i = 1;i<n;i++)
        {
            pre[i] = max(pre[i-1],height[i]);
        }
        post[n-1]  = height[n-1];
        for(int i = n-2;i>=0;i--)
        {
            post[i] = max(post[i+1],height[i]);
        }
        int ans = 0;
        for(int i = 1;i< n-1;i++)
        {
            if(height[i] < min(post[i],pre[i]))
            {
                ans += min(post[i],pre[i])-height[i];
            }
        }
        return ans;
        
    }
};