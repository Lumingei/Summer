/*最小的k个数
输入整数数组 arr ，找出其中最小的 k 个数。例如，输入4、5、1、6、2、7、3、8这8个数字，则最小的4个数字是1、2、3、4。

示例 1：
输入：arr = [3,2,1], k = 2
输出：[1,2] 或者 [2,1]
*/ 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int comp(void *a,void *b){          
    return *(int*)a-*(int*)b;
}    
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    qsort(arr,arrSize,sizeof(int),comp);        //快速排序 
    int *result=(int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++){
        result[i]=arr[i];
    }
    *returnSize=k;
    return result;
}
