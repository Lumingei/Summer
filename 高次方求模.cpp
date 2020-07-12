//高次方求模
//应用题目：求3^123456后三位所表示的整数
//二分法快速幂算法，即求 3^123456%1000
//***最后求出的幂结果实际上就是在变化过程中所有当指数为奇数时底数的乘积。

#include<stdio.h>
long long fun(long base,long power){    //防止数据太大造成溢出，采用超长整形数据 
	long long result=1;
	while(power>0){
		if(power%2==0){                 //指数为偶数，将指数折半，底数加倍 
			power=power/2;
			base=base*base%1000; 
		}
		else{
			result=result*base%1000;    //指数为奇数，最终会分离出一个一次方的数，保存到result 
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
