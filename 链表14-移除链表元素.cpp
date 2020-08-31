/*移除链表元素
删除链表中等于给定值 val 的所有节点。

示例:
输入: 1->2->6->3->4->5->6, val = 6
输出: 1->2->3->4->5
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
