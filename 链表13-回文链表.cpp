/*��������
��дһ���������������������Ƿ��ǻ��ĵġ�

ʾ�� 1��
���룺 1->2
����� false 

ʾ�� 2��
���룺 1->2->2->1
����� true 
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    struct ListNode* p=head;
    struct ListNode* q=head;
    while(q && q->next){             //����ָ���ҵ������м�ڵ�
        p=p->next;
        q=q->next->next;
    }
    
    struct ListNode *cur,*temp=NULL;    //��ת�����벿�� 
    while(p){
        cur=p->next;
        p->next=temp;
        temp=p;
        p=cur;
    }
    
    while(temp && head){                  //�������������αȽ� 
        if(temp->val!=head->val)
            return false;
        temp=temp->next;
		head=head->next;
    }
    return true;
}
