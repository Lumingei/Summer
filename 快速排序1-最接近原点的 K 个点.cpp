/*最接近原点的 K 个点
我们有一个由平面上的点组成的列表 points。需要从中找出 K 个距离原点 (0, 0) 最近的点。
（这里，平面上两点之间的距离是欧几里德距离。）
你可以按任何顺序返回答案。除了点坐标的顺序之外，答案确保是唯一的。

示例 1：
输入：points = [[1,3],[-2,2]], K = 1
输出：[[-2,2]]
解释： 
(1, 3) 和原点之间的距离为 sqrt(10)，
(-2, 2) 和原点之间的距离为 sqrt(8)，
由于 sqrt(8) < sqrt(10)，(-2, 2) 离原点更近。
我们只需要距离原点最近的 K = 1 个点，所以答案就是 [[-2,2]]。
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 
 //重点：注意二级指针的用法！ 
int compare(const void *a,const void *b){                                         //快速排序compare函数 
    int **c=(int **)a;
    int **d=(int **)b;
    return (*c)[0]*(*c)[0]+(*c)[1]*(*c)[1]-(*d)[0]*(*d)[0]-(*d)[1]*(*d)[1];
    
}
int** kClosest(int** points, int pointsSize, int* pointsColSize, int K, int* returnSize, int** returnColumnSizes){
    
	int **result=(int **)malloc(sizeof(int *)*K);
    *returnColumnSizes=(int *)malloc(sizeof(int)*K);
    qsort(points,pointsSize,sizeof(int)*2,compare);                             //每个元素包含两个数据，所以元素大小为sizeof(int)*2 
    for(int i=0;i<K;i++){
        result[i]=(int *)malloc(sizeof(int)*2);                                 //数据迁移 
        result[i][0]=points[i][0];
        result[i][1]=points[i][1];
        (*returnColumnSizes)[i]=2;
    }
    
	*returnSize=K;
    
    return result;
}
