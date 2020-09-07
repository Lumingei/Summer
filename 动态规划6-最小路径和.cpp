/*最小路径和
给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
说明：每次只能向下或者向右移动一步。

示例:
输入:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
输出: 7
解释: 因为路径 1→3→1→1→1 的总和最小。
*/

int minPathSum(int** grid, int gridSize, int* gridColSize){
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[i];j++){
            
            if(i-1>=0 && j-1>= 0)                              //判断上一步的坐标是否越界
                grid[i][j]+=fmin(grid[i-1][j],grid[i][j-1]);  //如果左上均为越界,则加和值取二者的最小值
            else if(i-1>=0)                                   //左边未越界,加上左边的最小路径和
                grid[i][j]+=grid[i-1][j]; 
        	else if(j-1>=0)                                   //上边未越界,加上上边的最小路径和
                grid[i][j]+=grid[i][j-1];
                    
        }
    }
    return grid[gridSize-1][gridColSize[0]-1];
}
