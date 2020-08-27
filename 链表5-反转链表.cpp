/*反转链表
定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。

示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
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
        struct ListNode *tmp=cur->next;     //临时指针存下一地址
        if(cur->next==NULL)                 //链表结束，next为NULL
            p=cur;                          //保存翻转后的头地址
        
        cur->next=pre;                      //翻转当前节点next，使其指向上一个节点
        pre=cur;                            //移动前一节点的指针
        cur=tmp;                            //移动当前指针
    }
    return p;                            

