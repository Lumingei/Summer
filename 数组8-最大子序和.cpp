/*最大子序和 
给定一个整数数组 nums，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

输入: [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释:连续子数组[4,-1,2,1] 的和最大，为6。
进阶:
*/

int maxSubArray(int* nums, int numsSize){                //运用贪心算法 
    int max=nums[0];
    int tot=nums[0];
    for(int i=1;i<numsSize;i++){
        if(tot>0)                                        //总和大于0，可以试着继续往下加 
            tot+=nums[i];
        else                                             //总和不大于0，说明上一轮加了一个很大的负数拉低的整体，这一部分即可舍去 
            tot=nums[i];                                 //从当前值开始重新加和 
        max=tot>max?tot:max;
    }
    return max;
} 
