/*�����г��ִ�������һ�������
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�

ʾ�� :
����: [1, 2, 3, 2, 2, 2, 5, 4, 2]
���: 2
*/

//�������� 
int majorityElement(int* nums, int numsSize){
 int cmp(const void* a,const void* b){
     return *(int*)a-*(int*)b;
 }
 qsort(nums,numsSize,sizeof(int),cmp);
 return nums[numsSize/2];
}

/*Ħ��ͶƱ��
int majorityElement(int* nums, int numsSize){
    int count=0;
    int res=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]==res) 
			count++;
        else 
			count--;
        if(count==0)
            res=nums[i+1]; 
    }
    return res;
}
*/

 
