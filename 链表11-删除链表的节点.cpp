/*ɾ������Ľڵ�
�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣
����ɾ����������ͷ�ڵ㡣
ע�⣺����Ա�ԭ���иĶ�

ʾ�� 1:
����: head = [4,5,1,9], val = 5
���: [4,1,9]
����: ������������ֵΪ 5 �ĵڶ����ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 1 -> 9.
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

