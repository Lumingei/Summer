/*ת����Сд��ĸ
ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

ʾ�� ��
����: "Hello"
���: "hello"
*/

char * toLowerCase(char * str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(isupper(str[i]))                         //isupper() �����������һ���ַ��Ƿ��Ǵ�д��ĸ
            str[i]=tolower(str[i]);                 //tolower() ������������д��ĸת��ΪСд��ĸ
    }
    return str;
}

/*�����������淽���� 
char * toLowerCase(char * s){
    int i=0;
    while(s[i]!=0){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
        i++;
    }
    return s;
}


