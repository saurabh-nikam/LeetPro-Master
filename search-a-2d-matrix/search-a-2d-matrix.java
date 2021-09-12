class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;     
        int first = 0;
        int last = n*m -1;
        while(first <= last)
        {
            int mid = first + (last- first)/2;
            if(matrix[mid/m][mid%m] == target)
                return true;
            else if(matrix[mid/m][mid%m] >= target)
                last = mid-1;
            else
                first = mid+1;   
        }
        return false;
        
    }
}