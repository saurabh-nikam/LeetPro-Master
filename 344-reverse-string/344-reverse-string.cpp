class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size();j--;
        int i = 0;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
};