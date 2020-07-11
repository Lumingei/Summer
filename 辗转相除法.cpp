//欧几里得算法（辗转相除法）求最大公约数
#include<stdio.h>
int max(int a,int b);
int min(int a,int b);

int main(){
	int a,b,m,n,p,q;
	printf("请输入两个正整数：\n");
	scanf("%d%d",&a,&b);

	m=max(a,b);   //两数之大
	n=min(a,b);   //两数之小
	p=m%n;        //求余数
	while(p!=0){
		m=n;
		n=p;
		p=m%n;    //若不能整除，用两数的较小数除以余数
	}
	q=n;          //直到整除，确定最大公约数
	printf("最大公约数为：%d\n",q);
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