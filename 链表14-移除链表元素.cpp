/*�Ƴ�����Ԫ��
ɾ�������е��ڸ���ֵ val �����нڵ㡣

ʾ��:
����: 1->2->6->3->4->5->6, val = 6
���: 1->2->3->4->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *p,*q;
    while(head){
        if(head->val==val)
            head=head->next;
        else
            break;
        }
    p=head;
    while(p){
        q=p->next;
        while(q){
                if(q->val==val)          
                     q=q->next;
                else            
                    break;
            }
        p->next=q;
        p=p->next;
    }
    return head;
}
