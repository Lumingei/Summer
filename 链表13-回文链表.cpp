/*回文链表
编写一个函数，检查输入的链表是否是回文的。

示例 1：
输入： 1->2
输出： false 

示例 2：
输入： 1->2->2->1
输出： true 
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
    while(q && q->next){             //快慢指针找到链表中间节点
        p=p->next;
        q=q->next->next;
    }
    
    struct ListNode *cur,*temp=NULL;    //反转链表后半部分 
    while(p){
        cur=p->next;
        p->next=temp;
        temp=p;
        p=cur;
    }
    
    while(temp && head){                  //将两段链表依次比较 
        if(temp->val!=head->val)
            return false;
        temp=temp->next;
		head=head->next;
    }
    return true;
}
