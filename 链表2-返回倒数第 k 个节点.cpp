/*���ص����� k ���ڵ�
ʵ��һ���㷨���ҳ����������е����� k ���ڵ㡣���ظýڵ��ֵ��
ע�⣺�������ԭ�������Ķ�

ʾ����
���룺 1->2->3->4->5 �� k = 2
����� 4
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int kthToLast(struct ListNode* head, int k){        //����ָ�� 
    struct ListNode *pre=head;
    struct ListNode *p=head;
    for(int i=0;i<k;i++){
        p=p->next;
    }
    while(p){
        p=p->next;
        pre=pre->next;
     }
     return pre->val;
}

