/*链表的中间结点
给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
如果有两个中间结点，则返回第二个中间结点。

示例 1：
输入：[1,2,3,4,5]
输出：此列表中的结点 3 (序列化形式：[3,4,5])

示例 2： 
输入：[1,2,3,4,5,6]
输出：此列表中的结点 4 (序列化形式：[4,5,6])
由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    int len = 0;
    struct ListNode* pNode = head;
    while (pNode != NULL) {                              //获取链表长度
        len++;
        pNode = pNode->next;
    }
    struct ListNode* Node = head;
    int k = (len % 2) ? (len + 1)/2 : ((len/2) + 1);     //根据链表长度的奇偶判断中间位置 
    for (int i = 1; i < k; ++i) {
        Node = Node->next;
    }

    return Node;
}

