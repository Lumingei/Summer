/*��������Ľ���
�����������飬��дһ���������������ǵĽ�����

ʾ�� 1��
���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    if(nums1Size==0 && nums2Size==0){                                                         //����Ϊ�ա�ֱ�ӷ��� 
        *returnSize=0;
        return 0;
    }
    int min=nums1Size<nums2Size?nums1Size:nums2Size;
    int *a=(int *)malloc(sizeof(int)*min);                                                    //�����洢���� 
    int i,j,k,flag,count=0;

    for(i=0;i<nums1Size;i++){
        for(j=0;j<nums2Size;j++){
            flag=0;                                                                           //flag����������ǲ���֮ǰ���Ѿ������뽻�� 
            if(nums1[i]==nums2[j]){
                for(k=0;k<min;k++){
                    if(a[k]==nums1[i])                                                        //ȥ�� 
                        flag=1;
                }
                if(flag==0)
                    a[count++]=nums1[i];
            }
        }
    }
    *returnSize=count;
    return a;
}
