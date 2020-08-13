/*将矩阵按对角线排序
给你一个 m * n 的整数矩阵 mat ，请你将同一条对角线上的元素（从左上到右下）按升序排序后，返回排好序的矩阵。

示例 1：
输入：mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
输出：[[1,1,1,1],[1,2,2,2],[1,2,3,3]]
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** diagonalSort(int** mat, int matSize, int* matColSize, int* returnSize, int** returnColumnSizes){
    int i,j,k,temp;
    
    for(i=0;i<matSize-1;i++){                                       //运用冒泡排序 
        for(j=0;j<matSize-1-i;j++){
            for(k=0;k<matColSize[0]-1;k++){                         //内层还需遍历 
                if(mat[j][k]>mat[j+1][k+1]){
                    temp=mat[j][k];
                    mat[j][k]=mat[j+1][k+1];
                    mat[j+1][k+1]=temp;
                }
            }
        }
    }

    *returnSize=matSize;
    *returnColumnSizes=matColSize;

    return mat;

}
