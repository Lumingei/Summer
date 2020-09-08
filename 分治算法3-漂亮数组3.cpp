/*漂亮数组
对于某些固定的 N，如果数组 A 是整数 1, 2, ..., N 组成的排列，使得：
对于每个 i < j，都不存在 k 满足 i < k < j 使得 A[k] * 2 = A[i] + A[j]。
那么数组 A 是漂亮数组。
给定 N，返回任意漂亮数组 A（保证存在一个）。

示例 ：
输入：4
输出：[2,1,4,3]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void exec(int* arr, int size, int* tmp1, int* tmp2)
{
    int i;
    int j=0;
    int k=0;

    if(size<=2)
        return;
    
    for(i=0;i<size;i++) {       //处理数组，把数字1 3 5 7 放在前面，把2 4 6 8...放在后面
        if(i%2==0)
            tmp1[j++]=arr[i];
        else
            tmp2[k++]=arr[i];      
    }

    memcpy(arr,tmp1,j*sizeof(int));
    memcpy(arr+j,tmp2,k*sizeof(int));

    
    exec(arr,j,tmp1,tmp2);     //对前面的1 3 5 7...重复该处理过程

    exec(arr+j,k,tmp1,tmp2);   //对后面的2 4 6 8...重复该处理过程
}

int* beautifulArray(int N, int* returnSize){
    int* arr;
    int* tmp1;
    int* tmp2;
    int i;
    
    *returnSize = N;

    arr=(int*)malloc(sizeof(int)*N);

    
    tmp1=(int*)malloc(sizeof(int)*N);    //用于存放临时数据
    tmp2=(int*)malloc(sizeof(int)*N);

    for(i=0;i< N;i++)
        arr[i] = i + 1;
    
    exec(arr,N,tmp1,tmp2);

    free(tmp1);
    free(tmp2);

    return arr;
}

