/*�жϵ��Ƿ����߶���
����A(x1,y1),B(x2,y2),�ж� P(x,y)�Ƿ����߶�AB�� 
*/

//ע�⾫�ȿ��ƣ� 
#include<stdio.h>
int main(){
	double x1,y1,x2,y2,x,y,k1,k2;
	printf("������x�ϴ������꣺");
	scanf("%lf%lf",&x1,&y1);
	printf("������x��С������꣺");
	scanf("%lf%lf",&x2,&y2);
	printf("������P������꣺");
	scanf("%lf%lf",&x,&y);

	k1=(y1-y2)/(x1-x2);
	k2=(y1-y)/(x1-x);

	printf("%s\n",(k1==k2 && x<x1 && x>x2)?"P�����߶�AB��":"P�㲻���߶�AB��"); 
	
	return 0;
}






