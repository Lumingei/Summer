/*��ת����
����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣

ʾ��:
����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p=NULL;
    struct ListNode *cur=head;
    struct ListNode *pre=NULL; 
    while(cur!=NULL){
        struct ListNode *tmp=cur->next;     //��ʱָ�����һ��ַ
        if(cur->next==NULL)                 //���������nextΪNULL
            p=cur;                          //���淭ת���ͷ��ַ
        
        cur->next=pre;                      //��ת��ǰ�ڵ�next��ʹ��ָ����һ���ڵ�
        pre=cur;                            //�ƶ�ǰһ�ڵ��ָ��
        cur=tmp;                            //�ƶ���ǰָ��
    }
    return p;                            

