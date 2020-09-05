/*��������
�� O(n log n) ʱ�临�ӶȺͳ������ռ临�Ӷ��£��������������

ʾ�� 1:
����: 4->2->1->3
���: 1->2->3->4
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
	
	for(temp=head;temp!=NULL;temp=temp->next)        //�������е����ݴ����������� 
	    a[i++]=temp->val;
	
	qsort(a,i,sizeof(int),compare);                  //��������п������� 
	i=0;
	
	for(temp=head;temp!=NULL;temp=temp->next)        //�ٽ��ź���������·Żص������� 
	    temp->val=a[i++];
	
	return head;
}

