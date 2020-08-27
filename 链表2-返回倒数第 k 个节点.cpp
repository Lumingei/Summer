/*返回倒数第 k 个节点
实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。
注意：本题相对原题稍作改动

示例：
输入： 1->2->3->4->5 和 k = 2
输出： 4
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int kthToLast(struct ListNode* head, int k){        //快慢指针 
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

