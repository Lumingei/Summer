/*一维数组的动态和 
给你一个数组 nums 。数组「动态和」的计算公式为：runningSum[i] = sum(nums[0]…nums[i]) 。

请返回 nums 的动态和。

示例 1：
输入：nums = [1,2,3,4]
输出：[1,3,6,10]
解释：动态和计算过程为 [1, 1+2, 1+2+3, 1+2+3+4] 。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *a=(int *)malloc(sizeof (int)*numsSize);
    a[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        a[i]=nums[i]+a[i-1];
    }
    *returnSize=numsSize;
    return a;
}
