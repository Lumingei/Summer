//同余定理:如果两个整数a和b满足a-b能够被m整除，即(a-b)/m得到一个整数，那么就称整数a与b对模m同余，记作a≡b(mod m)。
//应用题目：自然数16520、14903、14177除以m得到相同的余数，m最大的数值等于多少？ 
//三个数同余，任意两数之差都是m的倍数，求m的最大值，即求这三个差值的最大公约数 

#include<stdio.h>
int fun(int a,int b){     //辗转相除法求最大公约数 
	int r=a%b;
	if(r==0)
		return b;
	else
		fun(b,r);
}

int main(){
	int a=16520,b=14903,c=14177;
	int d=a-b;
	int e=a-c;
	int f=b-c;
	
	int g=fun(d,e);    //先求前两个数的最大公约数 
	int h=fun(g,f);    //再求所得最大公约数与第三个数的最大公约数 
	
	printf("%d",h);
	return 0;
}


