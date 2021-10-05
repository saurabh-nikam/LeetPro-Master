class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        sort(boxTypes.begin(),boxTypes.end(),[&](vector<int>& a,vector<int>& b){
           return a[1] > b[1];
        });
        int temp = truckSize;
        for(auto i : boxTypes)
        {
            if(temp >= i[0])
            {
                ans += i[0]*i[1];
                temp -= i[0];
            }else
            {
                ans += temp*i[1];
                temp = 0;
                
            }
           
    
        }
         return ans;
        
    }
};