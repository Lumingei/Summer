//ɸ��������
//��ɸ ��1000000���ڵ�����
#include<stdio.h>
typedef int BOOL;  //����һ�������ͱ��� 0Ϊ���� 1Ϊ������
#define TRUE 1
#define FALSE 0

#define M 1000000    //��M����ֵ�ɸģ�

BOOL flag[M+1]={0};  //�ȼ�����������������
int prime[M];        //�����������������
int count=0;         //�����ĸ���

int main(){
	for(int i=2;i<M;i++){
		if(flag[i]==0){
			prime[count]=i;
			count++;
			for(int j=2;j<=M/i;j++){     //�����ı����������� �ݴ�ɸ��������
				flag[i*j]=1;
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}


