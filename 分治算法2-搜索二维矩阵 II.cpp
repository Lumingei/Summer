/*������ά���� II
��дһ����Ч���㷨������ m x n ���� matrix �е�һ��Ŀ��ֵ target���þ�������������ԣ�
ÿ�е�Ԫ�ش������������С�
ÿ�е�Ԫ�ش��ϵ����������С�

ʾ��:
���о��� matrix ���£�
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
���� target = 5������ true��
���� target = 20������ false��
*/



bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int i=matrixRowSize-1,j=0;
    while (i>=0 && j<matrixColSize){
        if(target<matrix[i][j])             //�� target < matrix[i][j] (С�ڵ� i ����Сֵ)�����ų��� i �У��� i--
			i--;
        else if(target>matrix[i][j])        //�� target > matrix[i][j] (���ڵ� j �����ֵ)�����ų��� j �У��� j++
			j++;
        else return 
			true;
    }
    return 
		false;
}


