/*�Ƴ��ظ��ڵ�
��д���룬�Ƴ�δ���������е��ظ��ڵ㡣�����ʼ���ֵĽڵ㡣

ʾ��1:

 ���룺[1, 2, 3, 3, 2, 1]
 �����[1, 2, 3]
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeDuplicateNodes(struct ListNode* head){
    struct ListNode*p=head;
    struct ListNode*pre=head;
    struct ListNode*h=head;
    while(head){
        while(p->next){
            pre=p;
            p=p->next;
            if(p->val==head->val){
                pre->next=p->next;
                p=pre;
            }
        }
       head=head->next;
       p=head;
    }
    return h;
}

