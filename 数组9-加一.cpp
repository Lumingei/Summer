/*��һ
����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ��

ʾ��1:
����: [1,2,3]
���: [1,2,4]
����: ���������ʾ���� 123��
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i=digitsSize-1;
    digits[i]++;
    while(digits[i]==10){                                             //�жϽ�λ���� 
        i--;
        if(i==-1){                                                    //˵�������λ��λ 
            *returnSize=digitsSize+1;
            int *a=(int *)malloc(sizeof(int)*(digitsSize+1));
            a[0]=1;
            for(int j=1;j<digitsSize+1;j++)
                a[j]=0;
            return a;
        }
        digits[i]++;                                                  //�������λ����ʹǰһλ���ּ�һ������λ 
    }
    for(int k=i+1;k<digitsSize;k++)
        digits[k]=0;                                                  //ʹ����λ���ϵ���Ϊ0 
        *returnSize=digitsSize;
        return digits;
}
