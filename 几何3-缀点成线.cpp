/*׺�����
��һ�� XY ����ϵ����һЩ�㣬���������� coordinates ���ֱ��¼���ǵ����꣬���� coordinates[i] = [x, y] ��ʾ������Ϊ x��������Ϊ y �ĵ㡣
�������жϣ���Щ���Ƿ��ڸ�����ϵ������ͬһ��ֱ���ϣ����򷵻� true�������뷵�� false��

ʾ�� 1��
���룺coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
�����true

ʾ�� 2��
���룺coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
�����false
*/

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){
    if(coordinatesSize<3)
        return true;
    for(int i=1;i<coordinatesSize;i++){                //�жϺ�����ÿ����͵�һ��������ߵ�б���Ƿ���� 
        if((coordinates[i][1]-coordinates[i-1][1])*(coordinates[1][0]-coordinates[0][0])!=(coordinates[i][0]-coordinates[i-1][0])*(coordinates[1][1]-coordinates[0][1]))
        return false;
    }
    *coordinatesColSize=2;
    return true;
}
