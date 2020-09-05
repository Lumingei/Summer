/*�ָ�����
����һ�������һ���ض�ֵ x����������зָ���ʹ������С�� x �Ľڵ㶼�ڴ��ڻ���� x �Ľڵ�֮ǰ��
��Ӧ����������������ÿ���ڵ�ĳ�ʼ���λ�á�

ʾ��:
����: head = 1->4->3->2->5->2, x = 3
���: 1->2->2->4->3->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *big=(struct ListNode*)calloc(100, sizeof(struct ListNode));   //����ռ䣬һ�����ڴ洢���������һ�����ڴ洢��С���� 
    struct ListNode *small=(struct ListNode*)calloc(100, sizeof(struct ListNode));
    struct ListNode *p=small;
	struct ListNode *q=big; 
    
    while(head!=NULL){
        if(head->val>=x){
            big->next=head;       //���ڵ���xʱ������big�� 
            big=big->next;
        }
        else{
            small->next=head;     //С��xʱ������small�� 
            small=small->next;
        }
        head=head->next;          //head����ƶ�
    }
    small->next=NULL;          
    big->next=q->next;           //������������������
    return p->next;              //����С��x������head
}

