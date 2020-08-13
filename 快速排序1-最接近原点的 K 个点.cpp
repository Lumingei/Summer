/*��ӽ�ԭ��� K ����
������һ����ƽ���ϵĵ���ɵ��б� points����Ҫ�����ҳ� K ������ԭ�� (0, 0) ����ĵ㡣
�����ƽ��������֮��ľ�����ŷ����¾��롣��
����԰��κ�˳�򷵻ش𰸡����˵������˳��֮�⣬��ȷ����Ψһ�ġ�

ʾ�� 1��
���룺points = [[1,3],[-2,2]], K = 1
�����[[-2,2]]
���ͣ� 
(1, 3) ��ԭ��֮��ľ���Ϊ sqrt(10)��
(-2, 2) ��ԭ��֮��ľ���Ϊ sqrt(8)��
���� sqrt(8) < sqrt(10)��(-2, 2) ��ԭ�������
����ֻ��Ҫ����ԭ������� K = 1 ���㣬���Դ𰸾��� [[-2,2]]��
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 
 //�ص㣺ע�����ָ����÷��� 
int compare(const void *a,const void *b){                                         //��������compare���� 
    int **c=(int **)a;
    int **d=(int **)b;
    return (*c)[0]*(*c)[0]+(*c)[1]*(*c)[1]-(*d)[0]*(*d)[0]-(*d)[1]*(*d)[1];
    
}
int** kClosest(int** points, int pointsSize, int* pointsColSize, int K, int* returnSize, int** returnColumnSizes){
    
	int **result=(int **)malloc(sizeof(int *)*K);
    *returnColumnSizes=(int *)malloc(sizeof(int)*K);
    qsort(points,pointsSize,sizeof(int)*2,compare);                             //ÿ��Ԫ�ذ����������ݣ�����Ԫ�ش�СΪsizeof(int)*2 
    for(int i=0;i<K;i++){
        result[i]=(int *)malloc(sizeof(int)*2);                                 //����Ǩ�� 
        result[i][0]=points[i][0];
        result[i][1]=points[i][1];
        (*returnColumnSizes)[i]=2;
    }
    
	*returnSize=K;
    
    return result;
}
