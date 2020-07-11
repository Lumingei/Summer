//筛法求素数
//埃筛 求1000000以内的素数
#include<stdio.h>
typedef int BOOL;  //定义一个布尔型变量 0为素数 1为非素数
#define TRUE 1
#define FALSE 0

#define M 1000000    //（M的数值可改）

BOOL flag[M+1]={0};  //先假设所有数都是素数
int prime[M];        //存放真正素数的数组
int count=0;         //素数的个数

int main(){
	for(int i=2;i<M;i++){
		if(flag[i]==0){
			prime[count]=i;
			count++;
			for(int j=2;j<=M/i;j++){     //素数的倍数不是素数 据此筛掉非素数
				flag[i*j]=1;
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}


