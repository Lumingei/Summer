/*两数之和 
给定一个整数数组 nums和一个目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]

Note: The returned array must be malloced, assume caller calls free().
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int *a=(int *)malloc(sizeof(int)*2);                                 //申请空间 用于存储符合题意的数组下标 
	int temp;
	for(int i=0;i<numsSize-1;i++){
		temp=target-nums[i];
		for(int j=1;j<numsSize;j++){
			if(nums[j]==temp){
				*a=i;
				*(a+1)=j;
				*returnSize=2;
				return a;
			}	
		}
	}
	return 0; 
}
