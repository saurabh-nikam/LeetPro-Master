class Solution {
    std::vector<int> numCount;
public:

    vector<int> findDuplicates(vector<int>& n)
    {
        vector<int> duplicates;
        sort(n.begin(),n.end());
        
//         for(int i=0;i<n.size();i++)
//         { 
//             // evaluate index of selected element if array would have been sorted..
//             int indexOfElem = abs(n[i]) - 1;
            
//             if(indexOfElem < n.size() && n[indexOfElem] != indexOfElem +1)
//             {
//                 swap(n[indexOfElem],n[i]);
//             }
            
//         }
        for(int i = 0;i<n.size()-1;i++)
        {
            if(n[i] == n[i+1])//1 2 2 3 3 4 5 6 7 8
                duplicates.push_back(n[i]);
        }
        return duplicates;
    }
};