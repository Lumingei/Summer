/*三维形体的表面积
在 N * N 的网格上，我们放置一些 1 * 1 * 1  的立方体。
每个值 v = grid[i][j] 表示 v 个正方体叠放在对应单元格 (i, j) 上。
请你返回最终形体的表面积。

示例 1：
输入：[[2]]
输出：10

示例 2：
输入：[[1,2],[3,4]]
输出：34
*/

int surfaceArea(int** grid, int gridSize, int* gridColSize){
    int i,j,k,count=0;
    
    for(i=0;i<gridSize;i++){
        for(j=0;j<*gridColSize;j++){
            for(k=0;k<grid[i][j];k++){
                count+=6;
                if(k>0){                          //两正方体下面相邻 
                    count-=2;
                }
                if(i>0 && grid[i-1][j]>k){       //左面相邻 
                    count-=2;
                }
                if(j>0 && grid[i][j-1]>k){       //前面相邻  
                    count-=2;
                }
            }
        }
    }
    *gridColSize=2;
    return count;
}
