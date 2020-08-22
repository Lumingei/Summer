/*翻转矩阵后的得分
有一个二维矩阵 A 其中每个元素的值为 0 或 1 。
移动是指选择任一行或列，并转换该行或列中的每一个值：将所有 0 都更改为 1，将所有 1 都更改为 0。
在做出任意次数的移动后，将该矩阵的每一行都按照二进制数来解释，矩阵的得分就是这些数字的总和。
返回尽可能高的分数。

示例：
输入：[[0,0,1,1],[1,0,1,0],[1,1,0,0]]
输出：39
解释：
转换为 [[1,1,1,1],[1,0,0,1],[1,1,1,1]]
0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39
*/

int matrixScore(int** A, int ASize, int* AColSize){
    for(int i=0;i<ASize;i++)                     //先判断每行第一个数字是否是1，若不是则翻转此行 
        if(A[i][0]==0)
            for(int j=0;j<AColSize[i];j++){
                A[i][j]++;
                A[i][j]%=2;
            }
    for(int i=0;i<AColSize[0];i++){              //判断每列里0的个数是否大于1的个数，若0多，则翻转此列 
        int sum=0;
        for(int j=0;j<ASize;j++)
            sum+=A[j][i];
        if(sum*2<ASize)
            for(int j=0;j<ASize;j++){
                A[j][i]++;
                A[j][i]%=2;
            }
    }
    long long n=0;                               ////二进制转十进制累加 
    for(int i=0;i<ASize;i++){
        int m=0;
        for(int j=0;j<AColSize[i];j++){
            m*=2;
            m+=A[i][j];
        }
        n+=m;
    }
    return n;
}

