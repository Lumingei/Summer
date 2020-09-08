/*搜索二维矩阵 II
编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。该矩阵具有以下特性：
每行的元素从左到右升序排列。
每列的元素从上到下升序排列。

示例:
现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。
给定 target = 20，返回 false。
*/



bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int i=matrixRowSize-1,j=0;
    while (i>=0 && j<matrixColSize){
        if(target<matrix[i][j])             //若 target < matrix[i][j] (小于第 i 行最小值)，则排除第 i 行，令 i--
			i--;
        else if(target>matrix[i][j])        //若 target > matrix[i][j] (大于第 j 列最大值)，则排除第 j 列，令 j++
			j++;
        else return 
			true;
    }
    return 
		false;
}


