// class Solution {
// public:
//     string kthLargestNumber(vector<string>& nums, int k) {
//        //  multiset<int>ss;
//         int n = nums.size();
//        //  if( k > n)
//        //      return "";
//        //  int i = 0;
//        //  for(;i<k;i++)
//        //  {
//        //      ss.insert(stoi(nums[i]));
//        //  }
//        // auto it = ss.begin();
//        //  if(k == n)
//        //      return to_string(*it);
//        //  for(;i<n;i++)
//        //  {
//        //      it = ss.begin();
//        //      if(stoi(nums[i]) > *it)
//        //      {
//        //          ss.insert(stoi(nums[i]));
//        //          ss.erase(it);
//        //      }
//        //  }
//        //  it = ss.begin();
//        //  return to_string(*it);
//         sort(nums.begin(),nums.end(),[&](string &a,string &b){
//             if(a.size() > b.size())
//                 return a;
            
//         })
            class Solution {
public:
    static bool comp(string& a, string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), comp);
        return nums[nums.size()-k];
    }
                
};
            
    