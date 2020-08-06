/*һά����Ķ�̬�� 
����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ��

�뷵�� nums �Ķ�̬�͡�

ʾ�� 1��
���룺nums = [1,2,3,4]
�����[1,3,6,10]
���ͣ���̬�ͼ������Ϊ [1, 1+2, 1+2+3, 1+2+3+4] ��
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *a=(int *)malloc(sizeof (int)*numsSize);
    a[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        a[i]=nums[i]+a[i-1];
    }
    *returnSize=numsSize;
    return a;
}
