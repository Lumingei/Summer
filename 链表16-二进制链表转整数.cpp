/*����������ת����
����һ������������ý�� head��������ÿ������ֵ���� 0 ���� 1����֪��������һ���������ֵĶ����Ʊ�ʾ��ʽ��
���㷵�ظ���������ʾ���ֵ� ʮ����ֵ ��

ʾ�� 1��
���룺head = [1,0,1]
�����5
���ͣ��������� (101) ת��Ϊʮ������ (5)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    int sum=0;
    while(head){
        sum=sum*2+head->val;
        head=head->next;
    }
    return sum;
}
