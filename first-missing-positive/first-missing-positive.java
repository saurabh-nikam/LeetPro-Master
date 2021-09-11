class Solution {
    public static void swap(int[] arr,int i,int correct)
    {
        int temp = arr[i];
        arr[i] = arr[correct];
        arr[correct] = temp;
    }
    public static void sort(int[] arr)
    {
        int i = 0;
        while(i < arr.length)
        {
            int correct = arr[i] -1;
            if(arr[i] > 0 && arr[i] <= arr.length && arr[i] != arr[correct])
                swap(arr,i,correct);
            else
                i++;
        }
    }
    public int firstMissingPositive(int[] nums) {
        sort(nums);
        for(int  i =0;i<nums.length;i++)
        {
            if(i+1 != nums[i] )
                return i+1;
        }
        
        return nums.length + 1;
    }
}