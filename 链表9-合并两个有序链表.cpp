/*合并两个有序链表
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：
输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if(l1==NULL)
	    return l2;
	if(l2==NULL)
	    return l1;
	struct ListNode *p=l1;
	struct ListNode *q;
	
	while(p->next!=NULL)          //将两个链表首位相接构成一个链表
	    p=p->next
	p->next=l2;
	int temp;
	for(p=l1;p;p=p->next){       //冒泡排序 
	    struct ListNode *ptr;  
	    for(q=p->next;q;q=q->next){
	        ptr=p;
	        if(ptr->val>q->val){
	            temp=q->val;
	            q->val=p->val;
	            p->val=temp;
	        }
	        else
	            ptr=q;
	    }
	}
	return l1;
}

