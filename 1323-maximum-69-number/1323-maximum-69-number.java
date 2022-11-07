class Solution {
    public int maximum69Number (int num) {
        StringBuilder numSb = new StringBuilder();
        numSb.append(num);
        
        for(int i = 0;i<numSb.length(); ++i)
        {
            if(numSb.charAt(i) == '6'){
                numSb.setCharAt(i,'9');
                break;
            }
        }
        return Integer.parseInt(numSb.toString());
    }
}