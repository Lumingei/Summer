/*链表中倒数第k个节点
输入一个链表，输出该链表中倒数第k个节点。为了符合大多数人的习惯，本题从1开始计数，即链表的尾节点是倒数第1个节点。
例如，一个链表有6个节点，从头节点开始，它们的值依次是1、2、3、4、5、6。这个链表的倒数第3个节点是值为4的节点。

示例：
给定一个链表: 1->2->3->4->5, 和 k = 2.
返回链表 4->5.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *getKthFromEnd(struct ListNode *head, int k){        //快慢指针 
    struct ListNode *p=head;
    struct ListNode *q=head;
    
    if (head==NULL || k<=0)
        return NULL;   
    while(k){
        q=q->next;
        if(q==NULL && k!=1)
            return NULL;
        
        k--;
    }
    while(q!=NULL){
        q=q->next;
        p=p->next;
    }
    
    return p;
}

