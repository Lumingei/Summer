/*三角形的最大周长
给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。

如果不能形成任何面积不为零的三角形，返回 0。

示例 1：
输入：[2,1,2]
输出：5
*/

int compare(const void *a,const void *b){                      //快速排序compare函数 
    int *c=(int *)a;
    int *d=(int *)b;
    int num1=*c;
    int num2=*d;
    return num1-num2;
}
int largestPerimeter(int* A, int ASize){
    int l=0;
    qsort(A,ASize,sizeof(int),compare);                        //快速排序 
    for(int i=ASize-1;i>=2;i--){                               //从最大的三个数开始找，满足三角形返回周长，不满足向前推移 
        if(A[i-2]+A[i-1]>A[i]){
            l=A[i-2]+A[i-1]+A[i];
            break;
        }
    }
    return l;
}
