/*从尾到头打印链表
输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

示例 ：
输入：head = [1,3,2]
输出：[2,3,1]
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
	if(head==NULL){               //链表为空 
        *returnSize=0;
        return NULL;
    }  
    while(p){                    //链表长度
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

