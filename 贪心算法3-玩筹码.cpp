/*�����
�����Ϸ�����һЩ���룬ÿ�������λ�ô������� chips ���С�
����Զ� �κγ��� ִ���������ֲ���֮һ�����޲���������0 ��Ҳ���ԣ���
���� i ����������������ƶ� 2 ����λ������Ϊ 0��
���� i ����������������ƶ� 1 ����λ������Ϊ 1��
�ʼ��ʱ��ͬһλ����Ҳ���ܷ����������߸���ĳ��롣
���ؽ����г����ƶ���ͬһλ�ã�����λ�ã�������Ҫ����С���ۡ�

ʾ����
���룺chips = [1,2,3]
�����1
���ͣ��ڶ��������ƶ���λ�����Ĵ����� 1����һ�������ƶ���λ�����Ĵ����� 0���ܴ���Ϊ 1��
*/ 

int minCostToMoveChips(int* position, int positionSize){ 
    int a=0,b=0;
    for(int i=0;i<positionSize;i++){            //��ż��λ�������е�2x��λ�ã�������λ�������е�2x+1��λ�ã����۶�Ϊ0 
        if(position[i]%2==0)                     
            a++;
        else
            b++;
    }
    if(a>=b)                                   ////�Ƚ�ż��λ������λ�ĸ���Ŀ���٣������� 
        return b;
    else
        return a;
}

/*�������������ⷨ��
int minCostToMoveChips(int* chips, int chipsSize){
    
    int cost = 0;
    int retAns = 100000000;
    int distance = 0;
    for (int i = 0; i < chipsSize; i++) {
        for (int j = 0; j < chipsSize; j++) {
            distance = abs(chips[j] - chips[i]);
            if (distance % 2 == 1) {
                cost++;
            }
        }
        retAns = (retAns > cost) ? cost : retAns;
        cost = 0;
    }

    return retAns;
}
*/ 

 
