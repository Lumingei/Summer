//����������������׹�ʽ��
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,p,area;
	printf("�����������ε����߳���");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){                  //�ж��ܷ��γ������� 
		p=1.0/2.0*(a+b+c);
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("���������Ϊ��%lf",area);
	}
	
	printf("�����γ������Σ�");
	
	return 0;
	
} 
