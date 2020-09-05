/*��ż����
����һ�������������е������ڵ��ż���ڵ�ֱ�����һ����ע�⣬����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż�ԣ������ǽڵ��ֵ����ż�ԡ�
�볢��ʹ��ԭ���㷨��ɡ�����㷨�Ŀռ临�Ӷ�ӦΪ O(1)��ʱ�临�Ӷ�ӦΪ O(nodes)��nodes Ϊ�ڵ�������

ʾ�� 1:
����: 1->2->3->4->5->NULL
���: 1->3->5->2->4->NULL
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* oddEvenList(struct ListNode* head){
    if(head==NULL || head->next==NULL) 
		return head;
    struct ListNode* Head=head->next;      //��¼ż���տ�ʼ��λ�ã����������ż����
    struct ListNode* odd=head;             //����λ��
    struct ListNode* even=odd->next;       //ż��λ��
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;         //ÿ��һ����¼һ�Σ��γ���ż�������� 
        even->next=even->next->next;
        odd=odd->next;
        even=odd->next;
    }
    
	odd->next=Head;                        //�����ż���� 
    return head;
}
