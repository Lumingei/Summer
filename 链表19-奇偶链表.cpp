/*奇偶链表
给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。
请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。

示例 1:
输入: 1->2->3->4->5->NULL
输出: 1->3->5->2->4->NULL
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* oddEvenList(struct ListNode* head){
    if(head==NULL || head->next==NULL) 
		return head;
    struct ListNode* Head=head->next;      //记录偶数刚开始的位置，用于最后奇偶连接
    struct ListNode* odd=head;             //奇数位置
    struct ListNode* even=odd->next;       //偶数位置
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;         //每隔一个记录一次，形成奇偶两个链表 
        even->next=even->next->next;
        odd=odd->next;
        even=odd->next;
    }
    
	odd->next=Head;                        //最后奇偶连接 
    return head;
}
