/*���������ַ���
����һ���ַ��� s ��һ�� ������ͬ ���������� indices ��

�������������ַ��� s �����е� i ���ַ���Ҫ�ƶ��� indices[i] ָʾ��λ�á�

�����������к���ַ�����

ʾ�� 1��
���룺s = "codeleet", indices = [4,5,6,7,0,2,1,3]
�����"leetcode"
���ͣ���ͼ��ʾ��"codeleet" �������к��Ϊ "leetcode" ��
*/

char * restoreString(char * s, int* indices, int indicesSize){
    char *a=(char *)malloc(sizeof(char)*(indicesSize+1));
    for(int i=0;i<indicesSize;i++){
        a[indices[i]]=s[i];
    }
    a[indicesSize]='\0';
    return a;
}
