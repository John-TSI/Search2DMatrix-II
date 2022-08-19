#include"../inc/solution.hpp"


bool Solution::searchMatrix(std::vector<std::vector<int>>& matrix, int target)
{
    int ROWS = matrix.size(), COLS = matrix[0].size();
    int row{ROWS-1}, col{0};  // start search from bottom-left element of matrix
    while(row > -1 && col < COLS)
    {
        if(matrix[row][col] == target){ return true; }  // found the target
        row = (matrix[row][col] > target) ? --row : row;  // target is less than current element, move up to previous row
        col = (matrix[row][col] < target) ? ++col : col;  // target is greater than current element, move right to next column
    }
    return false;  // target not found within the matrix
}