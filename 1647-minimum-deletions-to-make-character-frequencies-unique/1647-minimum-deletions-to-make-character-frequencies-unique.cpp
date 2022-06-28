class Solution {
public:
    int minDeletions(string s) {
        vector<int>arr(27,0);int ans = 0;
        int n = arr.size();
        for(auto it:s)
        {
            arr[it-'a']++;  //keep the freq of evry elemt
        }
        sort(arr.begin(),arr.end(),greater<int>());
      set<int>seen;
        for(int i=  0;i<=26;i++)
        {
            if(seen.find(arr[i]) == seen.end())
            {
                //elemnt is not presetn 
                seen.insert(arr[i]);
            }else
            {
                //already present
                while(seen.find(arr[i]) != seen.end())
                {
                    if(arr[i] > 0)
                        {arr[i]--;
                        ans++;}
                    else
                    {
                        break;
                    }
                }
                seen.insert(arr[i]);
            }
        }
        return ans;
        
        
    }
};