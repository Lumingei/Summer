/*����ת�ַ���
�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β�����붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ����磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��

ʾ�� 1��
����: s = "abcdefg", k = 2
���: "cdefgab"
*/ 

char* reverseLeftWords(char* s, int n){
    int len=strlen(s);
    int j=0;
    char *a=(char *)malloc(sizeof(char)*len+1);
    
	for(int i=n;i<len;i++){                             //��벿�� 
        a[j++]=s[i];
    }
    for(int i=0;i<n;i++){                               //ǰ�벿�� 
        a[j++]=s[i];
    }
    
	a[j]='\0';                                          //������һ��Ҫд�� 
    return a;
}
