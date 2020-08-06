/*重新排列数组 
给你一个数组 nums ，数组中有 2n 个元素，按 [x1,x2,...,xn,y1,y2,...,yn] 的格式排列。

请你将数组按 [x1,y1,x2,y2,...,xn,yn] 格式重新排列，返回重排后的数组。

示例 1：
输入：nums = [2,5,1,3,4,7], n = 3
输出：[2,3,5,4,1,7] 
解释：由于 x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 ，所以答案为 [2,3,5,4,1,7]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*numsSize);
    int j=0;
    for(int i=0;i<numsSize;i=i+2)                                   //奇数项 
        a[i]=nums[j++];    
    for(int i=1;i<numsSize;i=i+2)                                   //偶数项 
        a[i]=nums[n++];
    *returnSize=numsSize;
    return a;
}

/**方法二： 
 * Note: The returned array must be malloced, assume caller calls free().

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*numsSize);
    int j=0;
    for(int i=0;i<n;i++){
        a[j++]=nums[i];
        a[j++]=nums[i+n];
    }
     
    *returnSize=numsSize;
    return a;
}

*/ 
