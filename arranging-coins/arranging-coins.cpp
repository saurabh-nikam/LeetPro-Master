class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int i  =1;
        while(n > 0)
        {
            n  = n-i;
            count++;
            i++;
        }
        return n == 0?count:count-1;
        
    }
};