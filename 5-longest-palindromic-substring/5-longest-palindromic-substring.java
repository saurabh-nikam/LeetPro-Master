class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        boolean[][] dp = new boolean[n][n];
        String res = "";
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                dp[j][i] = (j+1 > i-1 || dp[j+1][i-1]) && s.charAt(j) == s.charAt(i);
                if (dp[j][i] && res.length() < i - j + 1){
                    res = s.substring(j, i+1);
                }
            }
        }
        return res;
    }
}