/*按摩师
一个有名的按摩师会收到源源不断的预约请求，每个预约都可以选择接或不接。在每次预约服务之间要有休息时间，因此她不能接受相邻的预约。
给定一个预约请求序列，替按摩师找到最优的预约集合（总预约时间最长），返回总的分钟数。
注意：本题相对原题稍作改动

示例 1：
输入： [1,2,3,1]
输出： 4
解释： 选择 1 号预约和 3 号预约，总时长 = 1 + 3 = 4。
*/

#define MAX(a,b) (a>b?a:b)

int massage(int* nums, int numsSize){
    if(numsSize==0) 
		return 0;
    
	int * ]dp =(int*)malloc(sizeof(int)*numsSize);
    memset(dp,0,sizeof(int)*numsSize);

    for(int i=0;i<numsSize;i++){
        if(i==0) 
			dp[i]=nums[i];
        if(i==1) 
			dp[i]=MAX(nums[0],nums[1]);
        if(i>1)
            dp[i]=MAX(dp[i-2]+nums[i],dp[i-1]);
        } 
    return dp[numsSize-1];
}


