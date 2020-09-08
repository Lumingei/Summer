/*Ư������
����ĳЩ�̶��� N��������� A ������ 1, 2, ..., N ��ɵ����У�ʹ�ã�
����ÿ�� i < j���������� k ���� i < k < j ʹ�� A[k] * 2 = A[i] + A[j]��
��ô���� A ��Ư�����顣
���� N����������Ư������ A����֤����һ������

ʾ�� ��
���룺4
�����[2,1,4,3]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void exec(int* arr, int size, int* tmp1, int* tmp2)
{
    int i;
    int j=0;
    int k=0;

    if(size<=2)
        return;
    
    for(i=0;i<size;i++) {       //�������飬������1 3 5 7 ����ǰ�棬��2 4 6 8...���ں���
        if(i%2==0)
            tmp1[j++]=arr[i];
        else
            tmp2[k++]=arr[i];      
    }

    memcpy(arr,tmp1,j*sizeof(int));
    memcpy(arr+j,tmp2,k*sizeof(int));

    
    exec(arr,j,tmp1,tmp2);     //��ǰ���1 3 5 7...�ظ��ô������

    exec(arr+j,k,tmp1,tmp2);   //�Ժ����2 4 6 8...�ظ��ô������
}

int* beautifulArray(int N, int* returnSize){
    int* arr;
    int* tmp1;
    int* tmp2;
    int i;
    
    *returnSize = N;

    arr=(int*)malloc(sizeof(int)*N);

    
    tmp1=(int*)malloc(sizeof(int)*N);    //���ڴ����ʱ����
    tmp2=(int*)malloc(sizeof(int)*N);

    for(i=0;i< N;i++)
        arr[i] = i + 1;
    
    exec(arr,N,tmp1,tmp2);

    free(tmp1);
    free(tmp2);

    return arr;
}

