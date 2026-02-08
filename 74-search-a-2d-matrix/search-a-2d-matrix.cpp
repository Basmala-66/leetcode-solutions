class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int start = 0, end = (m * n)-1;
        int row, col;
        while (start <= end)
        {
            int mid = (start + end) / 2;

           
                row = mid / n;
                col = mid % n;
          
            
            if (matrix[row][col] == target)
                return true;

            else if (matrix[row][col] > target)
                end = mid - 1;

            else 
                start = mid + 1;

            
        }
        return false;
    }
};