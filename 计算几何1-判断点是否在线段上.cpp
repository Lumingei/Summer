/*判断点是否在线段上
给出A(x1,y1),B(x2,y2),判断 P(x,y)是否在线段AB上 
*/

//注意精度控制！ 
#include<stdio.h>
int main(){
	double x1,y1,x2,y2,x,y,k1,k2;
	printf("请输入x较大点的坐标：");
	scanf("%lf%lf",&x1,&y1);
	printf("请输入x较小点的坐标：");
	scanf("%lf%lf",&x2,&y2);
	printf("请输入P点的坐标：");
	scanf("%lf%lf",&x,&y);

	k1=(y1-y2)/(x1-x2);
	k2=(y1-y)/(x1-x);

	printf("%s\n",(k1==k2 && x<x1 && x>x2)?"P点在线段AB上":"P点不在线段AB上"); 
	
	return 0;
}






