/*�������� 
С�����������ڴ������� numExchange ���վ�ƿ���Զһ�һƿ�¾ơ��㹺���� numBottles ƿ�ơ�
����ȵ��˾�ƿ�еľƣ���ô��ƿ�ͻ��ɿյġ�
������� ��� �ܺȵ�����ƿ�ơ�

ʾ�� 1��
���룺numBottles = 9, numExchange = 3
�����13
���ͣ�������� 3 ���վ�ƿ�һ� 1 ƿ�ơ�
*/ 

int numWaterBottles(int numBottles, int numExchange){      //����ѧ���� 
    int sum=numBottles,a=numBottles/numExchange,rest;      //aΪ�̣�restΪ���� 
    while(a>0){
        a=numBottles/numExchange;
        rest=numBottles%numExchange;
        sum+=a;                                            //�Ѿ��ȵ������� 
        numBottles=a+rest;;                                //����ȥ���Ƶ����� 
    }
    return sum;
}
