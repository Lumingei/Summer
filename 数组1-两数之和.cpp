/*����֮�� 
����һ���������� nums��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ�����������������������ǵ������±ꡣ
����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ�ز���ʹ�����顣

ʾ��:
���� nums = [2, 7, 11, 15], target = 9
��Ϊ nums[0] + nums[1] = 2 + 7 = 9
���Է��� [0, 1]

Note: The returned array must be malloced, assume caller calls free().
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int *a=(int *)malloc(sizeof(int)*2);                                 //����ռ� ���ڴ洢��������������±� 
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
