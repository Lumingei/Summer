/*ɾ�����������е��ظ�Ԫ��
����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�

ʾ�� :
����: 1->1->2
���: 1->2
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head==NULL) 
        return NULL;

    struct ListNode *p=head;
    struct ListNode *temp=NULL;
    while (p!=NULL && p->next!=NULL){
        if (p->next->val==p->val){
            temp=p->next;
            p->next=p->next->next;
            free(temp);
        } else
            p=p->next;          
    }
    return head;
}


