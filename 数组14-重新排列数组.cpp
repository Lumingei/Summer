/*������������ 
����һ������ nums ���������� 2n ��Ԫ�أ��� [x1,x2,...,xn,y1,y2,...,yn] �ĸ�ʽ���С�

���㽫���鰴 [x1,y1,x2,y2,...,xn,yn] ��ʽ�������У��������ź�����顣

ʾ�� 1��
���룺nums = [2,5,1,3,4,7], n = 3
�����[2,3,5,4,1,7] 
���ͣ����� x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 �����Դ�Ϊ [2,3,5,4,1,7]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*numsSize);
    int j=0;
    for(int i=0;i<numsSize;i=i+2)                                   //������ 
        a[i]=nums[j++];    
    for(int i=1;i<numsSize;i=i+2)                                   //ż���� 
        a[i]=nums[n++];
    *returnSize=numsSize;
    return a;
}

/**�������� 
 * Note: The returned array must be malloced, assume caller calls free().

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*numsSize);
    int j=0;
    for(int i=0;i<n;i++){
        a[j++]=nums[i];
        a[j++]=nums[i+n];
    }
     
    *returnSize=numsSize;
    return a;
}

*/ 
