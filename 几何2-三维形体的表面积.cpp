/*��ά����ı����
�� N * N �������ϣ����Ƿ���һЩ 1 * 1 * 1  �������塣
ÿ��ֵ v = grid[i][j] ��ʾ v ������������ڶ�Ӧ��Ԫ�� (i, j) �ϡ�
���㷵����������ı������

ʾ�� 1��
���룺[[2]]
�����10

ʾ�� 2��
���룺[[1,2],[3,4]]
�����34
*/

int surfaceArea(int** grid, int gridSize, int* gridColSize){
    int i,j,k,count=0;
    
    for(i=0;i<gridSize;i++){
        for(j=0;j<*gridColSize;j++){
            for(k=0;k<grid[i][j];k++){
                count+=6;
                if(k>0){                          //���������������� 
                    count-=2;
                }
                if(i>0 && grid[i-1][j]>k){       //�������� 
                    count-=2;
                }
                if(j>0 && grid[i][j-1]>k){       //ǰ������  
                    count-=2;
                }
            }
        }
    }
    *gridColSize=2;
    return count;
}
