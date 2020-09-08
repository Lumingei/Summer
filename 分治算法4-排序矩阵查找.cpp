/*排序矩阵查找
给定M×N矩阵，每一行、每一列都按升序排列，请编写代码找出某元素。

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

int compare(const void *a, const void *b) {
    return *(int*)a-*(int*)b;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    if(matrixSize==0 || matrixColSize[0]==0) 
        return false;

    int row=matrixSize;
    int col=matrixColSize[0];

    int *res=(int*)calloc(row*col,sizeof(int));
    int isize=0;

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) 
            res[isize++] = matrix[i][j];
        
    }
    
    qsort(a, isize, sizeof(int), compare);

    int a=0,b=isize-1;

    while(a<b){
        int mid=(a+b)/2;
        if(target<res[mid]) 
            b=mid;
        else 
            a=mid+1;  
    }

    return res[a]==target || (a>0 && res[a-1]==target);
}



