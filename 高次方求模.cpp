//�ߴη���ģ
//Ӧ����Ŀ����3^123456����λ����ʾ������
//���ַ��������㷨������ 3^123456%1000
//***���������ݽ��ʵ���Ͼ����ڱ仯���������е�ָ��Ϊ����ʱ�����ĳ˻���

#include<stdio.h>
long long fun(long base,long power){    //��ֹ����̫�������������ó����������� 
	long long result=1;
	while(power>0){
		if(power%2==0){                 //ָ��Ϊż������ָ���۰룬�����ӱ� 
			power=power/2;
			base=base*base%1000; 
		}
		else{
			result=result*base%1000;    //ָ��Ϊ���������ջ�����һ��һ�η����������浽result 
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
