/*��������λ�� 
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
����Լ������������ظ�Ԫ�ء�

ʾ�� 1:
����: [1,3,5,6], 5
���: 2

ʾ��2:
����: [1,3,5,6], 2
���: 1

ʾ�� 3:
����: [1,3,5,6], 7
���: 4

ʾ�� 4:
����: [1,3,5,6], 0
���: 0
*/

int searchInsert(int* nums, int numsSize, int target){
    for(int i=1;i<numsSize;i++){
        if(nums[i]==target || (target>nums[i-1] && target<nums[i]))
             return i;
    }
    if(target<=nums[0])
        return 0;
    if(target>nums[numsSize-1])
        return numsSize;
        
    return 0;
}

/* �Ż��� 
int searchInsert(int* nums, int numsSize, int target){
    for(int i=0; i<numsSize; ++i)
        if(target <= nums[i]) return i;
    return numsSize;
}
*/

