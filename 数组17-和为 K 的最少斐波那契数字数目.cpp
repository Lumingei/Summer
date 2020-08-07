/*和为 K 的最少斐波那契数字数目
给你数字 k，请你返回和为k的斐波那契数字的最少数目，其中，每个斐波那契数字都可以被使用多次。

斐波那契数字定义为：

F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2， 其中 n > 2 。
数据保证对于给定的 k，一定能找到可行解。

示例 1：
输入：k = 7
输出：2 
解释：斐波那契数字为：1，1，2，3，5，8，13，……
对于 k = 7 ，我们可以得到 2 + 5 = 7 。
*/ 

int findMinFibonacciNumbers(int k){
    int F[50];
    int count=0;
    F[1]=F[0]=1;
    for(int i=2;i<50;i++){
        F[i]=F[i-1]+F[i-2];
        if(k<F[i])                                     //斐波那契数比k大的时候，跳出循环，节省空间 
            break;
    }
    while(k!=0){
        for(int i=0;i<50;i++){
            if(F[i]>k){
                k=k-F[i-1];                           //每次都找出比k小的最大斐波那契数 
                count++;
                break;
            }
        }
    }
    return count;
}
