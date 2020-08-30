/*删除链表的节点
给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
返回删除后的链表的头节点。
注意：此题对比原题有改动

示例 1:
输入: head = [4,5,1,9], val = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode *p=head;
	if(head==NULL) 
		return NULL;
    if(head->val==val)
		head=head->next;
    while(p&&p->next){            
        if(p->next->val==val) {
            p->next=p->next->next;
            break;
        }
        p=p->next;
    }
    return head;
}

