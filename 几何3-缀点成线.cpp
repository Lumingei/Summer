/*缀点成线
在一个 XY 坐标系中有一些点，我们用数组 coordinates 来分别记录它们的坐标，其中 coordinates[i] = [x, y] 表示横坐标为 x、纵坐标为 y 的点。
请你来判断，这些点是否在该坐标系中属于同一条直线上，是则返回 true，否则请返回 false。

示例 1：
输入：coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
输出：true

示例 2：
输入：coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
输出：false
*/

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){
    if(coordinatesSize<3)
        return true;
    for(int i=1;i<coordinatesSize;i++){                //判断后续的每个点和第一个点的连线的斜率是否相等 
        if((coordinates[i][1]-coordinates[i-1][1])*(coordinates[1][0]-coordinates[0][0])!=(coordinates[i][0]-coordinates[i-1][0])*(coordinates[1][1]-coordinates[0][1]))
        return false;
    }
    *coordinatesColSize=2;
    return true;
}
