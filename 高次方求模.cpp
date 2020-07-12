//高次方求模
//应用题目：求3^123456后三位所表示的整数
//二分法快速幂算法，即求 3^123456%1000

#include<stdio.h>
long long fun(long base,long power){
	long long result=1;
	while(power>0){
		if(power%2==0){
			power=power/2;
			base=base*base%1000; 
		}
		else{
			result=result*base%1000;
			power=power/2;
			base=base*base%1000;
			
		}
		
		}
	return result;	
	}
 
 int main(){
     long long a=fun(3,123456);
     printf("%I64d",a);
     return a;
 }
