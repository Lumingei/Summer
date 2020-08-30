/*移除重复节点
编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。

示例1:

 输入：[1, 2, 3, 3, 2, 1]
 输出：[1, 2, 3]
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

