/*��ת����˳��
����һ��Ӣ�ľ��ӣ���ת�����е��ʵ�˳�򣬵��������ַ���˳�򲻱䡣Ϊ������������ź���ͨ��ĸһ������
���������ַ���"I am a student. "�������"student. a am I"��

ʾ�� 1��
����: "the sky is blue"
���: "blue is sky the"

ʾ�� 2��
����: "  hello world!  "
���: "world! hello"
����: �����ַ���������ǰ����ߺ����������Ŀո񣬵��Ƿ�ת����ַ����ܰ�����
*/

//˼·���Ȱ��ַ���������ת���ٷָ����ʣ�Ȼ�����η�ת��������
 
void reverseStr(char *s){                             //��ת�����ַ���
    int len=strlen(s);
    char a;
    for(int i=0;i<len/2;i++){
        a=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=a;
    }
}
char* reverseWords(char* s){
    char *delim=" ";                                 //�ָ���Ϊ�ո�
    char *word=NULL;
    int len=strlen(s);
    int j=0;
    char *str=(char *)malloc(sizeof(char)*len+1);   //�����㹻�ռ䣬��ʵ�ʳ���Ҫ��
    if(s==NULL || len==0)
        return s;
    memset(str,'\0',sizeof(char)*len+1);            //�ڴ��ʼ�� 

    reverseStr(s);
    word=strtok(s,delim);                           //����strtok�������ֽ��ַ���Ϊn�鵥��
    while(word!=NULL){
        reverseStr(word);                           //��ת����
        for(int i=0;i<strlen(word);i++){
            str[j++]=word[i];
        }
        str[j++]=' ';                               //���ʽ��������Ͽո�
        word=strtok(NULL,delim);
    }
    if(j>0)
        str[j-1]='\0';

    return str;    
}

/*����strtok����
ͷ�ļ�:#include <string.h>
����ԭ�ͣ�char *strtok(char *s, const char *delim);
Function���ֽ��ַ���Ϊһ���ַ�����sΪҪ�ֽ���ַ�����delimΪ�ָ����ַ�����
Description��strtok()�������ַ����ָ��һ����Ƭ�Ρ�
����sָ�����ָ���ַ���������delim��Ϊ�ָ��ַ�������strtok()�ڲ���s���ַ����з��ֵ�����delim�ķָ��ַ�ʱ��Ὣ���ַ���Ϊ\0 �ַ���
�ڵ�һ�ε���ʱ��strtok()����������s�ַ���������ĵ����򽫲���s���ó�NULL��ÿ�ε��óɹ��򷵻ر��ָ��Ƭ�ε�ָ�롣
*/
