class Solution {
public:
    int maximum69Number (int num) {
        string numString = to_string(num);
        for(auto &curChar : numString){
            if( curChar == '6'){
                curChar = '9';
                break;
            }
        }
        return stoi(numString);
        
    }
};