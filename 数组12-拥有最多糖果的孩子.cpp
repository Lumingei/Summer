/*ӵ������ǹ��ĺ��� 
����һ������candies��һ������extraCandies������candies[i]����� i ������ӵ�е��ǹ���Ŀ��

��ÿһ�����ӣ�����Ƿ����һ�ַ������������?extraCandies���ǹ������������֮�󣬴˺����� ���?���ǹ���ע�⣬�����ж������ͬʱӵ�� �����ǹ���Ŀ��

ʾ�� 1��
���룺candies = [2,3,5,1,3], extraCandies = 3
�����[true,true,true,false,true] 
���ͣ�
���� 1 �� 2 ���ǹ���������õ����ж�����ǹ���3��������ô���ܹ��� 5 ���ǹ���������Ϊӵ������ǹ��ĺ��ӡ�
���� 2 �� 3 ���ǹ���������õ����� 2 �������ǹ�����ô������Ϊӵ������ǹ��ĺ��ӡ�
���� 3 �� 5 ���ǹ������Ѿ���ӵ������ǹ��ĺ��ӡ�
���� 4 �� 1 ���ǹ�����ʹ���õ����ж�����ǹ�����Ҳֻ�� 4 ���ǹ����޷���Ϊӵ���ǹ����ĺ��ӡ�
���� 5 �� 3 ���ǹ���������õ����� 2 �������ǹ�����ô������Ϊӵ������ǹ��ĺ��ӡ�
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool *a=(bool *)malloc(sizeof(bool)*candiesSize);                                          //�����ͱ��� 
    int max=candies[0];
    for(int i=0;i<candiesSize;i++){
        max=candies[i]>max?candies[i]:max;                                                     //���ҳ������е����ֵ 
        candies[i]+=extraCandies;                                                              //��ÿ�������϶�����ǹ��� 
    }
    for(int j=0;j<candiesSize;j++){
        a[j]=candies[j]>=max?true:false;                                                       //���϶����ǹ����������ֵ���ڵ���ԭ�������ֵ������Գ�Ϊӵ���ǹ����ĺ��ӣ���֮���� 
    }
    *returnSize=candiesSize;
    return a;
}
