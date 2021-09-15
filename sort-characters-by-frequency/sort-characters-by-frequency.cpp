class Solution {
public:
    string frequencySort(string s) {
    	if(s.size() == 0)	return "";

        unordered_map<char,int> map;
        for(auto c : s)
        	map[c]++;
        sort(s.begin(),s.end(),
        	[&](char a, char b){return map[a] > map[b] || map[a] == map[b] && a < b;}
        	);
		return s;
    }
};
