/*按奇偶排序数组
给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。
对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。
你可以返回任何满足上述条件的数组作为答案。

示例：
输入：[4,2,5,7]
输出：[4,5,2,7]
解释：[4,7,2,5]，[2,5,4,7]，[2,7,4,5] 也会被接受。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize){
    int *result=(int *)malloc(sizeof(int)*ASize);
    int a=1,b=0;                                                    //奇下标、偶下标分别初始化，使得程序能在一个for循环里完成，效率更高 
    for(int i=0;i<ASize;i++){
        if(A[i]%2!=0){
            result[a]=A[i];
            a=a+2;
        }  
        else{
            result[b]=A[i];
            b=b+2;
        }
    }
    *returnSize=ASize;

    return result;
}
