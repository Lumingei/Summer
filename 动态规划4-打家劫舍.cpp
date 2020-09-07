/*打家劫舍
你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，
如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
给定一个代表每个房屋存放金额的非负整数数组，计算你不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。

示例 1：
输入：[1,2,3,1]
输出：4
解释：偷窃 1 号房屋 (金额 = 1) ，然后偷窃 3 号房屋 (金额 = 3)。
偷窃到的最高金额 = 1 + 3 = 4 。
*/

int max(int a, int b){
    return a>b?a:b;
}

int rob(int* nums, int numsSize){

	if(numsSize==0)
	    return 0;
	if(numsSize==1)
	    return nums[0];
	
	 int *dp=(int*)malloc(sizeof(int)*numsSize);         //设dp[i]表示第i个房屋之前的最高金额
	dp[0]=nums[0];
	dp[1]=max(nums[0],nums[1]);
	
	for(int i=2;i<numsSize;i++){
	    dp[i]=max(dp[i-2]+nums[i],dp[i-1]);              //偷窃当前位置i：返回 i-2处最高金额及i处金额 	                                                      
	}                                                    //不偷窃当前位置i：返回 i-1处最高金额
	return dp[numsSize-1];
}



