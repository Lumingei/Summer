/*����ż��������
����һ���Ǹ��������� A�� A ��һ��������������һ��������ż����
��������������Ա㵱 A[i] Ϊ����ʱ��i Ҳ���������� A[i] Ϊż��ʱ�� i Ҳ��ż����
����Է����κ���������������������Ϊ�𰸡�

ʾ����
���룺[4,2,5,7]
�����[4,5,2,7]
���ͣ�[4,7,2,5]��[2,5,4,7]��[2,7,4,5] Ҳ�ᱻ���ܡ�
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize){
    int *result=(int *)malloc(sizeof(int)*ASize);
    int a=1,b=0;                                                    //���±ꡢż�±�ֱ��ʼ����ʹ�ó�������һ��forѭ������ɣ�Ч�ʸ��� 
    for(int i=0;i<ASize;i++){
        if(A[i]%2!=0){
            result[a]=A[i];
            a=a+2;
        }  
        else{
            result[b]=A[i];
            b=b+2;
        }
    }
    *returnSize=ASize;

    return result;
}
