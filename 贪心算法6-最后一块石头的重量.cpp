/*���һ��ʯͷ������
��һ��ʯͷ��ÿ��ʯͷ������������������
ÿһ�غϣ�����ѡ������ ���ص� ʯͷ��Ȼ������һ����顣����ʯͷ�������ֱ�Ϊ x �� y���� x <= y����ô����Ŀ��ܽ�����£�
��� x == y����ô����ʯͷ���ᱻ��ȫ���飻
��� x != y����ô����Ϊ x ��ʯͷ������ȫ���飬������Ϊ y ��ʯͷ������Ϊ y-x��
������ֻ��ʣ��һ��ʯͷ�����ش�ʯͷ�����������û��ʯͷʣ�£��ͷ��� 0��

ʾ����
���룺[2,7,4,1,8,1]
�����1
���ͣ�
��ѡ�� 7 �� 8���õ� 1����������ת��Ϊ [2,4,1,1,1]��
��ѡ�� 2 �� 4���õ� 2����������ת��Ϊ [2,1,1,1]��
������ 2 �� 1���õ� 1����������ת��Ϊ [1,1,1]��
���ѡ�� 1 �� 1���õ� 0����������ת��Ϊ [1]����������ʣ���ǿ�ʯͷ��������

*/

int CompareInt(const void *a, const void *b){
    return *(int *)a-*(int *)b;
}
int lastStoneWeight(int* stones, int stonesSize){
    while(stonesSize>2) {
        qsort(stones,stonesSize,sizeof(int),CompareInt);
        if (stones[stonesSize-2] != stones[stonesSize-1]){
            stones[stonesSize-2] = stones[stonesSize-1]-stones[stonesSize-2];
            stonesSize--;
        } else {
            stonesSize-=2;
        }
    }
    if(stonesSize==1) {
        return stones[0];
    } else if (stonesSize==2){
        return abs(stones[0]-stones[1]);
    } else {
        return 0;
    }
}
 
