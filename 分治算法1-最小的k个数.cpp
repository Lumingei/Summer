/*��С��k����
������������ arr ���ҳ�������С�� k ���������磬����4��5��1��6��2��7��3��8��8�����֣�����С��4��������1��2��3��4��

ʾ�� 1��
���룺arr = [3,2,1], k = 2
�����[1,2] ���� [2,1]
*/ 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int comp(void *a,void *b){          
    return *(int*)a-*(int*)b;
}    
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    qsort(arr,arrSize,sizeof(int),comp);        //�������� 
    int *result=(int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++){
        result[i]=arr[i];
    }
    *returnSize=k;
    return result;
}
