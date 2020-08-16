/*数组的相对排序
给你两个数组，arr1 和 arr2，
arr2 中的元素各不相同
arr2 中的每个元素都出现在 arr1 中
对 arr1 中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾。

示例：
输入：arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
输出：[2,2,2,1,4,3,3,9,6,7,19]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a,const void *b){
    int *c=(int *)a;
    int *d=(int *)b;
    int num1=*c;
    int num2=*d;
    return num1-num2;
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    int i,j,a=0;
    
    int *result=(int *)malloc(sizeof(int)*arr1Size);               //存放最后结果
    int *flag=(int *)malloc(sizeof(int)*arr1Size);                 //判断元素是否重合,起标记作用 
    
    memset(flag,0,sizeof(int)*arr1Size);                           //初始化0；
    qsort(arr1,arr1Size,sizeof(int),compare);                      //快速排序
    
    for(i=0;i<arr2Size;i++){
        for(j=0;j<arr1Size;j++){
            if(arr1[j]==arr2[i] && flag[j]==0){
                result[a++]=arr2[i];
                flag[j]=1;                                        //元素重合，flag记为1 
            }
        }
    }

    for(j=0;j<arr1Size;j++){
        if(flag[j]==0){            
            result[a++]=arr1[j];                                 //剩余元素放于末尾
        }
    }
                                                
    *returnSize=arr1Size;
    return result;
}
