/*ɾ���м�ڵ�
ʵ��һ���㷨��ɾ�����������м��ĳ���ڵ㣨�����ǵ�һ�������һ���ڵ㣩���ٶ���ֻ�ܷ��ʸýڵ㡣

ʾ����
���룺��������a->b->c->d->e->f�еĽڵ�c
������������κ����ݣ����������Ϊa->b->d->e->f
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {        //ֻҪ�Ѻ�һ���ڵ㣬�滻����ڵ��λ�� 
                                                //����ǰһ���ڵ���ϵ�˺�һ���ڵ㣬��һ���ڵ���Ȼ��ϵ���һ���ڵ�
    struct ListNode *temp=node->next;
    *node=*temp;
    free(temp);                                 //�ͷ��ڴ棡���� 
}
