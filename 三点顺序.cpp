#include<stdio.h>
int main(){
	double a,b,c,t;
	printf("��������������ֵ��");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	printf("��������С��������Ϊ��%lf %lf %lf",a,b,c);
	
	return 0;
}
