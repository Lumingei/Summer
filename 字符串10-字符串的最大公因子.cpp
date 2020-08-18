/*�ַ������������
�����ַ��� S �� T��ֻ���� S = T + ... + T��T ���������� 1 �λ��Σ�ʱ�����ǲ��϶� ��T �ܳ��� S����
������ַ��� X��Ҫ������ X �ܳ��� str1 �� X �ܳ��� str2��

ʾ�� 1��
���룺str1 = "ABCABC", str2 = "ABC"
�����"ABC"
*/ 

char * gcdOfStrings(char * str1, char * str2){
    int len1,len2,i;
    len1=strlen(str1);
    len2=strlen(str2);
    
    char *s1=(char *)malloc(sizeof(char)*(len1+len2+1));          //���������¿ռ� 
    char *s2=(char *)malloc(sizeof(char)*(len1+len2+1));
    s1[len1+len2]='\0';
    s2[len1+len2]='\0';
    strcpy(s1,str1);
    strcat(s1,str2);
    strcpy(s2,str2);
    strcat(s2,str1);

    if(strcmp(s1,s2)!=0)                                         //str1����str2���str2����str1��Ӧ����һ���ģ���һ������ 
        return "";
	i=len1%len2;
    while(i!=0){                                                 //շת����������Լ�� 
        len1=len2;
        len2=i;
        i=len1%len2;
    }

    char *result=(char *)malloc(sizeof(char)*(len2+1));
    result[len2]='\0';
    for(int j=0;j<len2;j++)
        result[j]=str1[j];                                       //���������д��result 
    return result;
}
