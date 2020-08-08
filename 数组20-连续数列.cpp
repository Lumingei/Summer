/*连续数列 
给定一个整数数组，找出总和最大的连续数列，并返回总和。

示例：

输入： [-2,1,-3,4,-1,2,1,-5,4]
输出： 6
解释： 连续子数组 [4,-1,2,1] 的和最大，为 6。
*/

int maxSubArray(int* nums, int numsSize){
    int max=nums[0];
    int sum=0;
    
	for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        if(sum>max)                         
            max=sum;                               //更新最大值 
        if(sum<0)
            sum=0;                                 //及时止损，忽略上段总和，重新开始计数 
    }
   
    return max;
} 
