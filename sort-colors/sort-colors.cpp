class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0 ;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 0)
                zero++;
            else if(nums[i] == 1)
                one++;
            else if(nums[i] == 2)
                two++;
        }
        int i = 0;
        while(zero--)
        {
            nums[i] = 0;
            i++;
        }
         while(one--)
        {
            nums[i] = 1;
            i++;
        } while(two--)
        {
            nums[i] = 2;
            i++;
        }
       
    }
};