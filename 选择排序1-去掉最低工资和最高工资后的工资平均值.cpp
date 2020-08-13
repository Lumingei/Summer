/*去掉最低工资和最高工资后的工资平均值
给你一个整数数组salary，数组里每个数都是 唯一的，其中salary[i] 是第i个员工的工资。

请你返回去掉最低工资和最高工资以后，剩下员工工资的平均值。

示例 1：
输入：salary = [4000,3000,1000,2000]
输出：2500.00000
解释：最低工资和最高工资分别是 1000 和 4000 。
去掉最低工资和最高工资以后的平均工资是 (2000+3000)/2= 2500
*/

double average(int* salary, int salarySize){
    double sum=0;
    for(int i=0;i<salarySize;i++){                         //选择排序 
        for(int j=i+1;j<salarySize;j++){
            if(salary[i]>salary[j]){
                int temp=salary[i];
                salary[i]=salary[j];
                salary[j]=temp;
            }
        }
    }
    
    for(int i=1;i<salarySize-1;i++)                       //掐头去尾，剩余相加 
        sum+=salary[i];

    return sum/(salarySize-2);    

}
/*方法二（不用排序，直接筛选相加） 
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
