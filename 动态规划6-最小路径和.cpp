/*��С·����
����һ�������Ǹ������� m x n �������ҳ�һ�������Ͻǵ����½ǵ�·����ʹ��·���ϵ������ܺ�Ϊ��С��
˵����ÿ��ֻ�����»��������ƶ�һ����

ʾ��:
����:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
���: 7
����: ��Ϊ·�� 1��3��1��1��1 ���ܺ���С��
*/

int minPathSum(int** grid, int gridSize, int* gridColSize){
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[i];j++){
            
            if(i-1>=0 && j-1>= 0)                              //�ж���һ���������Ƿ�Խ��
                grid[i][j]+=fmin(grid[i-1][j],grid[i][j-1]);  //������Ͼ�ΪԽ��,��Ӻ�ֵȡ���ߵ���Сֵ
            else if(i-1>=0)                                   //���δԽ��,������ߵ���С·����
                grid[i][j]+=grid[i-1][j]; 
        	else if(j-1>=0)                                   //�ϱ�δԽ��,�����ϱߵ���С·����
                grid[i][j]+=grid[i][j-1];
                    
        }
    }
    return grid[gridSize-1][gridColSize[0]-1];
}
