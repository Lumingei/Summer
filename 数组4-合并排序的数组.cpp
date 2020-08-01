/*合并排序的数组
给定两个排序后的数组 A 和 B，其中 A 的末端有足够的缓冲空间容纳 B。 编写一个方法，将 B 合并入 A 并排序。

初始化A 和 B 的元素数量分别为m 和 n。

示例:

输入:
A = [1,2,3,0,0,0], m = 3
B = [2,5,6],       n = 3

输出:[1,2,2,3,5,6]
*/

void merge(int* A, int ASize, int m, int* B, int BSize, int n){        //从后往前遍历，基于A原有的存储空间存储数据，重点：数组A、B已经排好序！ 
    int i,j,tot;                                                       
    i=m-1;
    j=n-1;
    tot=m+n-1;                                                         //A、B合并后总的数组下标 
    while(tot>=0){
        if(i>=0 && j>=0){                                              //从后往前依次分别拿出A、B组的数据比较，较大数存入总和数组 
            if(A[i]>B[j])
                A[tot--]=A[i--];
            else
                A[tot--]=B[j--];
        }
        else{                                                          //遍历结束以后，将剩余数据放入剩余位置即可 
            if(i>=0)
                A[tot--]=A[i--];
            else
                A[tot--]=B[j--];
        }
    }
}
