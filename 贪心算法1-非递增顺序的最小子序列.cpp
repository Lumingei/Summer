/*�ǵ���˳�����С������
����һ������ nums��������г�ȡһ�������У�����������е�Ԫ��֮�� �ϸ� ����δ�����ڸ��������еĸ�Ԫ��֮�͡�
������ڶ�����������ֻ�践�� ������С �������С������Ȼ�ж������������򷵻� Ԫ��֮����� �������С�
�������鲻ͬ�ĵط����ڣ�������������С���ǿ��Ԫ����ԭ�����е������ԣ�Ҳ����˵��������ͨ���������з���һЩ��Ҳ���ܲ����룩Ԫ�صõ���
ע�⣬��Ŀ���ݱ�֤��������Լ�������Ľ�������� Ψһ �ġ�ͬʱ�����صĴ�Ӧ���� �ǵ���˳�� ���С�

ʾ�� ��
���룺nums = [4,3,10,9,8]
�����[10,9] 
���ͣ������� [10,9] �� [10,8] ����С�ġ�����Ԫ��֮�ʹ���������Ԫ��֮�͵������С����� [10,9] ��Ԫ��֮����� 
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void*a,const void *b){
    return *(int *)b-*(int *)a;
}
int* minSubsequence(int* nums, int numsSize, int* returnSize){
    int left=0,right=0,k=0;
    int i;
    int *result=(int *)malloc(sizeof(int)*numsSize);
    
    qsort(nums,numsSize,sizeof(int),compare);               //������ 
    
        for(i=0;i<numsSize;i++){                            //�Ҳ��ֳ�ʼ��Ϊ����֮�ͣ��󲿷ֳ�ʼ��Ϊ0 
            right+=nums[i];
        }
        for(i=0;i<numsSize;i++){
            if(left>right)
                break;
            result[k++]=nums[i];
            left+=nums[i];                                  //��ͷ����������ֵ�ֵ��󲿷֣�ֱ���󲿷�֮�ʹ����Ҳ��� 
            right-=nums[i];
        }    
    
    *returnSize=i;
    return result;
        
}
