/*������Ʊ�����ʱ�� II
����һ�����飬���ĵ� i ��Ԫ����һ֧������Ʊ�� i ��ļ۸�
���һ���㷨�����������ܻ�ȡ�������������Ծ����ܵ���ɸ���Ľ��ף��������һ֧��Ʊ����
ע�⣺�㲻��ͬʱ�����ʽ��ף���������ٴι���ǰ���۵�֮ǰ�Ĺ�Ʊ����

ʾ��:
����: [7,1,5,3,6,4]
���: 7
����: �ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 3 �죨��Ʊ�۸� = 5����ʱ������, ��ʽ������ܻ������ = 5-1 = 4 ��
     ����ڵ� 4 �죨��Ʊ�۸� = 3����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ������, ��ʽ������ܻ������ = 6-3 = 3 ��
*/ 


int maxProfit(int* prices, int pricesSize){
    if(pricesSize<2)
        return;
        
    int i,temp,result=0;
    
    for(i=1;i<pricesSize; i++){
        temp = prices[i]-prices[i-1];            //��ֵ����0����ӵ������� 
        if(temp>0)
            result+=temp;
    }
    return result;
}


//��������һ�α���
//�������������۸��½�ʱ�ҵ���͵�����
//���۸�����ʱ�ҵ���ߵ�����
int maxProfit(int* prices, int pricesSize){
    int i = 0;
    int iMinPos = 0;
    int iMax = 0;
    int iTmp = 0;
    int iSum = 0;

    for(i = 1; i < pricesSize; i++){
        if(prices[i] < prices[i - 1]){    //���۸��½�ʱ�ҵ���͵����룬�����㵱ǰ������
            iSum += iMax;
            iMinPos = i;
            iMax = 0;
        }
        else{                            //���۸�����ʱ�ҵ���ߵ�������iMaxΪ���ν����������
            iTmp = prices[i] - prices[iMinPos];
            if(iTmp > iMax){
                iMax = iTmp;
            }
        }
    }
    
    iSum += iMax;                       //�������һ�ν�������
    return iSum;
}

