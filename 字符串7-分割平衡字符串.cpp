/*�ָ�ƽ���ַ���
��һ����ƽ���ַ������У�'L' �� 'R' �ַ�����������ͬ�ġ�

����һ��ƽ���ַ��� s�����㽫���ָ�ɾ����ܶ��ƽ���ַ�����

���ؿ���ͨ���ָ�õ���ƽ���ַ��������������

ʾ�� 1��
���룺s = "RLRRLLRLRL"
�����4
���ͣ�s ���Էָ�Ϊ "RL", "RRLL", "RL", "RL", ÿ�����ַ����ж�������ͬ������ 'L' �� 'R'��
*/

int balancedStringSplit(char * s){
    int len=strlen(s);
    int right=0,left=0,count=0;
    for(int i=0;i<len;i++){
        if(s[i]=='R')
            right++;
        else
            left++;
        if(right==left){                 //R,L��Ŀ��ȣ�count+1,һ�ֽ�������ʼ��һ�ּ��� 
            count++;
            right=left=0;
        }
            
    }
    return count;
}
