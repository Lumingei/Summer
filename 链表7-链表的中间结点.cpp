/*������м���
����һ������ͷ��� head �ķǿյ���������������м��㡣
����������м��㣬�򷵻صڶ����м��㡣

ʾ�� 1��
���룺[1,2,3,4,5]
��������б��еĽ�� 3 (���л���ʽ��[3,4,5])

ʾ�� 2�� 
���룺[1,2,3,4,5,6]
��������б��еĽ�� 4 (���л���ʽ��[4,5,6])
���ڸ��б��������м��㣬ֵ�ֱ�Ϊ 3 �� 4�����Ƿ��صڶ�����㡣
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
    while (pNode != NULL) {                              //��ȡ������
        len++;
        pNode = pNode->next;
    }
    struct ListNode* Node = head;
    int k = (len % 2) ? (len + 1)/2 : ((len/2) + 1);     //���������ȵ���ż�ж��м�λ�� 
    for (int i = 1; i < k; ++i) {
        Node = Node->next;
    }

    return Node;
}

