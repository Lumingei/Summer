/*�����ִ�С 
��������Ϸ�Ĺ������£�

ÿ����Ϸ��ϵͳ�����1��n ���ѡ��һ�����֡� �����ѡ�������ĸ����֡�
�����´��ˣ�ϵͳ�������������ֱ�ϵͳѡ���������Ǵ��˻���С�ˡ�
�����ͨ������һ��Ԥ�ȶ���õĽӿ�guess(int num) ����ȡ�²���������ֵһ���� 3 �ֿ��ܵ������-1��1�� 0����

-1 : ϵͳѡ�������ֱ���²������С
 1 : ϵͳѡ�������ֱ���²�����ִ�
 0 : ��ϲ����¶��ˣ�

ʾ�� :
����: n = 10, pick = 6
���: 6
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){                                    //���ֲ��ҷ��ı��� 
	
	long int low=0,high=n;                                 //���ó����ͣ������������ 
    long int mid;
   
    while(low<=high){
        mid=(low+high)/2;
        int a=guess(mid);                                  //����λ������ΪҪ�µ��� 
        if(a==0)
            return mid;
        else if(a==-1)
            high=mid-1;                                    //������벿�� 
        else if(a==1)
            low=mid+1;                                     //����ǰ�벿�� 
    }
   
    return mid;                                           
}
