class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        //ue here Reach variable to asign value maximun index we ca reach
        
    //check the condtion that we can reac particular index if our current reach >=i
        //then update it
    
        int reach = 0;
        
        for(int i = 0;i<n;i++)
        {
           if(reach >= i)
                reach = max(reach,i+nums[i]);
            else
                break;
        }
        
        if(reach >= n-1)
        {
            return true;
        }else
            return false;
        
        
        
    }
};