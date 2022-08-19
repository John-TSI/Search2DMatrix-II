// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::vector<std::vector<int>> matrix{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},
										{10,13,14,17,24},{18,21,23,26,30}};

	std::cout << Solution().searchMatrix(matrix, 5);  // true
	std::cout << Solution().searchMatrix(matrix, 77);  // false
	return 0;
}

