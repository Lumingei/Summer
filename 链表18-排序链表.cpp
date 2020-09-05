/*排序链表
在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序。

示例 1:
输入: 4->2->1->3
输出: 1->2->3->4
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int compare(const void *a, const void *b){
    return *((int *)a) - *((int *)b);
}

struct ListNode* sortList(struct ListNode* head){
	int a[100000]={0};               
	struct ListNode *temp=NULL;
	int i=0;
	
	if(head==NULL || head->next==NULL)
	    return head;
	
	for(temp=head;temp!=NULL;temp=temp->next)        //将链表中的数据储存在数组中 
	    a[i++]=temp->val;
	
	qsort(a,i,sizeof(int),compare);                  //对数组进行快速排序 
	i=0;
	
	for(temp=head;temp!=NULL;temp=temp->next)        //再将排好序的数重新放回到链表中 
	    temp->val=a[i++];
	
	return head;
}

