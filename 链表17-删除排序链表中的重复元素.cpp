/*删除排序链表中的重复元素
给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。

示例 :
输入: 1->1->2
输出: 1->2
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


