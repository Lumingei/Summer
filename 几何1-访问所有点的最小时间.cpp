/*�������е����Сʱ��
ƽ������ n ���㣬���λ�������������ʾ points[i] = [xi, yi]������������������Щ����Ҫ����Сʱ�䣨����Ϊ��λ����
����԰�������Ĺ�����ƽ�����ƶ���
ÿһ����ˮƽ������ֱ�����ƶ�һ����λ���ȣ����߿���Խ��ߣ����Կ�����һ������ˮƽ����ֱ������ƶ�һ����λ���ȣ���
���밴�������г��ֵ�˳����������Щ�㡣
 
ʾ�� ��
���룺points = [[1,1],[3,4],[-1,0]]
�����7
���ͣ�һ����ѵķ���·���ǣ� [1,1] -> [2,2] -> [3,3] -> [3,4] -> [2,3] -> [1,2] -> [0,1] -> [-1,0]   
�� [1,1] �� [3,4] ��Ҫ 3 �� 
�� [3,4] �� [-1,0] ��Ҫ 4 ��
һ����Ҫ 7 ��
*/

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){   //ȡ�����������֮��Ľϴ��� 
    int count=0,x,y;
    for(int i=1;i<pointsSize;i++){
    	x=abs(points[i][0]-points[i-1][0]);
    	y=abs(points[i][1]-points[i-1][1]);
    	if(x>y)
    		count+=x;
    	else
    		count+=y;
    }
    //�Ż�����forѭ���ڵ����ĳ���Ŀ���㣺
	//count+=abs(points[i][0]-points[i-1][0])>abs(points[i][1]-points[i-1][1])?abs(points[i][0]-points[i-1][0]):abs(points[i][1]-points[i-1][1]); 
    *pointsColSize=2;
    return count;
}


