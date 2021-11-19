class Solution {
public://xor click hona  chahiye
    int hammingDistance(int x, int y) {
        int count = 0;
        int bitdiffer = x ^ y;
        //basicalyy bits differ hoge woh xor honge ^ ;;
        
        //phir bitdiffe ke set bits count karle
        while(bitdiffer > 0)
        {
            count  += (bitdiffer & 1);
            bitdiffer = bitdiffer >> 1;
        }
        return count;
        
       
        
    }
};