/*��Ч����ĸ��λ��
���������ַ��� s �� t ����дһ���������ж� t �Ƿ��� s ����ĸ��λ�ʡ�

ʾ�� 1:
����: s = "anagram", t = "nagaram"
���: true
*/

int compare(const void *a,const void *b){
    return (*(char *)a-*(char *)b);
}
bool isAnagram(char * s, char * t){
    qsort(s,strlen(s),sizeof(char),compare);               //���� 
    qsort(t,strlen(t),sizeof(char),compare);
    if(strcmp(s,t)==0)                                     //�Ƚ������ַ��� 
        return true;
    else
        return false;
}
