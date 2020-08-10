/*删除中间节点
实现一种算法，删除单向链表中间的某个节点（即不是第一个或最后一个节点），假定你只能访问该节点。

示例：
输入：单向链表a->b->c->d->e->f中的节点c
结果：不返回任何数据，但该链表变为a->b->d->e->f
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {        //只要把后一个节点，替换这个节点的位置 
                                                //这样前一个节点联系了后一个节点，后一个节点仍然联系后后一个节点
    struct ListNode *temp=node->next;
    *node=*temp;
    free(temp);                                 //释放内存！！！ 
}
