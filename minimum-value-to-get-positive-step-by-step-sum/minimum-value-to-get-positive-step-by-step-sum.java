class Solution {
    public int minStartValue(int[] nums) {
    int sum = 0, min = 0; 
    for(int i: nums){
        sum+=i; 
        min = Math.min(sum, min);
    }
    if(min==0)return 1;
    else return -min+1;
}
}