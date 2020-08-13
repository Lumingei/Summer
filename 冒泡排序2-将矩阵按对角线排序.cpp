/*�����󰴶Խ�������
����һ�� m * n ���������� mat �����㽫ͬһ���Խ����ϵ�Ԫ�أ������ϵ����£�����������󣬷����ź���ľ���

ʾ�� 1��
���룺mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
�����[[1,1,1,1],[1,2,2,2],[1,2,3,3]]
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** diagonalSort(int** mat, int matSize, int* matColSize, int* returnSize, int** returnColumnSizes){
    int i,j,k,temp;
    
    for(i=0;i<matSize-1;i++){                                       //����ð������ 
        for(j=0;j<matSize-1-i;j++){
            for(k=0;k<matColSize[0]-1;k++){                         //�ڲ㻹����� 
                if(mat[j][k]>mat[j+1][k+1]){
                    temp=mat[j][k];
                    mat[j][k]=mat[j+1][k+1];
                    mat[j+1][k+1]=temp;
                }
            }
        }
    }

    *returnSize=matSize;
    *returnColumnSizes=matColSize;

    return mat;

}
