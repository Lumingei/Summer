/*��β��ͷ��ӡ����
����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���

ʾ�� ��
���룺head = [1,3,2]
�����[2,3,1]
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* reversePrint(struct ListNode* head, int* returnSize){
    struct ListNode *p=head;
    int size=0;
	if(head==NULL){               //����Ϊ�� 
        *returnSize=0;
        return NULL;
    }  
    while(p){                    //������
        p=p->next;
        size++;
    }

    int *res=(int *)malloc(size*sizeof(int));
    for(int i=size-1;i>=0;i--){
        res[i]=head->val;
        head=head->next;
    }
    *returnSize=size;
    return res;
}

