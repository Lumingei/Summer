/*ȥ����͹��ʺ���߹��ʺ�Ĺ���ƽ��ֵ
����һ����������salary��������ÿ�������� Ψһ�ģ�����salary[i] �ǵ�i��Ա���Ĺ��ʡ�

���㷵��ȥ����͹��ʺ���߹����Ժ�ʣ��Ա�����ʵ�ƽ��ֵ��

ʾ�� 1��
���룺salary = [4000,3000,1000,2000]
�����2500.00000
���ͣ���͹��ʺ���߹��ʷֱ��� 1000 �� 4000 ��
ȥ����͹��ʺ���߹����Ժ��ƽ�������� (2000+3000)/2= 2500
*/

double average(int* salary, int salarySize){
    double sum=0;
    for(int i=0;i<salarySize;i++){                         //ѡ������ 
        for(int j=i+1;j<salarySize;j++){
            if(salary[i]>salary[j]){
                int temp=salary[i];
                salary[i]=salary[j];
                salary[j]=temp;
            }
        }
    }
    
    for(int i=1;i<salarySize-1;i++)                       //��ͷȥβ��ʣ����� 
        sum+=salary[i];

    return sum/(salarySize-2);    

}
/*����������������ֱ��ɸѡ��ӣ� 
double average(int* salary, int salarySize){
    int min,max;
    min=max=salary[0];
    double sum=0;
    for(int i=0;i<salarySize;i++){
        min=salary[i]<min?salary[i]:min;
        max=salary[i]>max?salary[i]:max;
    }
    for(int i=0;i<salarySize;i++){
        if(salary[i]!=min && salary[i]!=max)
            sum+=salary[i];
    }
    return sum/(salarySize-2);
} 
*/
