/*�ϲ�������������
��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 

ʾ����
���룺1->2->4, 1->3->4
�����1->1->2->3->4->4
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
	
	while(p->next!=NULL)          //������������λ��ӹ���һ������
	    p=p->next
	p->next=l2;
	int temp;
	for(p=l1;p;p=p->next){       //ð������ 
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

