/*������������
�����������飬arr1 �� arr2��
arr2 �е�Ԫ�ظ�����ͬ
arr2 �е�ÿ��Ԫ�ض������� arr1 ��
�� arr1 �е�Ԫ�ؽ�������ʹ arr1 ��������˳��� arr2 �е����˳����ͬ��δ�� arr2 �г��ֹ���Ԫ����Ҫ����������� arr1 ��ĩβ��

ʾ����
���룺arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
�����[2,2,2,1,4,3,3,9,6,7,19]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a,const void *b){
    int *c=(int *)a;
    int *d=(int *)b;
    int num1=*c;
    int num2=*d;
    return num1-num2;
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    int i,j,a=0;
    
    int *result=(int *)malloc(sizeof(int)*arr1Size);               //��������
    int *flag=(int *)malloc(sizeof(int)*arr1Size);                 //�ж�Ԫ���Ƿ��غ�,�������� 
    
    memset(flag,0,sizeof(int)*arr1Size);                           //��ʼ��0��
    qsort(arr1,arr1Size,sizeof(int),compare);                      //��������
    
    for(i=0;i<arr2Size;i++){
        for(j=0;j<arr1Size;j++){
            if(arr1[j]==arr2[i] && flag[j]==0){
                result[a++]=arr2[i];
                flag[j]=1;                                        //Ԫ���غϣ�flag��Ϊ1 
            }
        }
    }

    for(j=0;j<arr1Size;j++){
        if(flag[j]==0){            
            result[a++]=arr1[j];                                 //ʣ��Ԫ�ط���ĩβ
        }
    }
                                                
    *returnSize=arr1Size;
    return result;
}
