/*�����ε�����ܳ�
������һЩ�����������ȣ���ɵ����� A����������������������ɵġ������Ϊ��������ε�����ܳ���

��������γ��κ������Ϊ��������Σ����� 0��

ʾ�� 1��
���룺[2,1,2]
�����5
*/

int compare(const void *a,const void *b){                      //��������compare���� 
    int *c=(int *)a;
    int *d=(int *)b;
    int num1=*c;
    int num2=*d;
    return num1-num2;
}
int largestPerimeter(int* A, int ASize){
    int l=0;
    qsort(A,ASize,sizeof(int),compare);                        //�������� 
    for(int i=ASize-1;i>=2;i--){                               //��������������ʼ�ң����������η����ܳ�����������ǰ���� 
        if(A[i-2]+A[i-1]>A[i]){
            l=A[i-2]+A[i-1]+A[i];
            break;
        }
    }
    return l;
}
