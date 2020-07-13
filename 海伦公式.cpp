//求三角形面积（海伦公式）
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,p,area;
	printf("请输入三角形的三边长：");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){                  //判断能否形成三角形 
		p=1.0/2.0*(a+b+c);
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形面积为：%lf",area);
	}
	
	printf("不能形成三角形！");
	
	return 0;
	
} 
