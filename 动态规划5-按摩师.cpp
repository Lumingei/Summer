/*��Ħʦ
һ�������İ�Ħʦ���յ�ԴԴ���ϵ�ԤԼ����ÿ��ԤԼ������ѡ��ӻ򲻽ӡ���ÿ��ԤԼ����֮��Ҫ����Ϣʱ�䣬��������ܽ������ڵ�ԤԼ��
����һ��ԤԼ�������У��水Ħʦ�ҵ����ŵ�ԤԼ���ϣ���ԤԼʱ������������ܵķ�������
ע�⣺�������ԭ�������Ķ�

ʾ�� 1��
���룺 [1,2,3,1]
����� 4
���ͣ� ѡ�� 1 ��ԤԼ�� 3 ��ԤԼ����ʱ�� = 1 + 3 = 4��
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


