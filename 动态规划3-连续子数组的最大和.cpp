/*连续子数组的最大和
输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。
要求时间复杂度为O(n)。

示例1:
输入: nums = [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
*/

int maxSubArray(int* nums, int numsSize){
    int sum,max;
    sum=0;
	max=nums[0];
    
	for (int i=0;i<numsSize;i++) {
        sum+=nums[i];                   //依次相加 
        if(sum>max)   
            max=sum;                    //更新当前最大值 
        if(sum<0)
            sum=0;                      //加和小于零时，即没必要继续相加，更新sum从零开始 
    }

    return max;
}


