//ŷ������㷨��շת������������Լ��
#include<stdio.h>
int max(int a,int b);
int min(int a,int b);

int main(){
	int a,b,m,n,p,q;
	printf("������������������\n");
	scanf("%d%d",&a,&b);

	m=max(a,b);   //����֮��
	n=min(a,b);   //����֮С
	p=m%n;        //������
	while(p!=0){
		m=n;
		n=p;
		p=m%n;    //�������������������Ľ�С����������
	}
	q=n;          //ֱ��������ȷ�����Լ��
	printf("���Լ��Ϊ��%d\n",q);
}

int max(int a,int b){  
	if(a>=b)
		return a;
	return b;
}

int min(int a,int b){
	if(a<=b)
		return a;
	return b;
}