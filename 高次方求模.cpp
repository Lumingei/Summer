//�ߴη���ģ
//Ӧ����Ŀ����3^123456����λ����ʾ������
//���ַ��������㷨������ 3^123456%1000

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
