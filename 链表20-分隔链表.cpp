/*分隔链表
给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。
你应当保留两个分区中每个节点的初始相对位置。

示例:
输入: head = 1->4->3->2->5->2, x = 3
输出: 1->2->2->4->3->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *big=(struct ListNode*)calloc(100, sizeof(struct ListNode));   //申请空间，一个用于存储更大的数，一个用于存储更小的数 
    struct ListNode *small=(struct ListNode*)calloc(100, sizeof(struct ListNode));
    struct ListNode *p=small;
	struct ListNode *q=big; 
    
    while(head!=NULL){
        if(head->val>=x){
            big->next=head;       //大于等于x时，存在big中 
            big=big->next;
        }
        else{
            small->next=head;     //小于x时，存在small中 
            small=small->next;
        }
        head=head->next;          //head向后移动
    }
    small->next=NULL;          
    big->next=q->next;           //将两个链表连接起来
    return p->next;              //返回小于x的链表head
}

