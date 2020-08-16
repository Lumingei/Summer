/*IP ��ַ��Ч��
����һ����Ч�� IPv4 ��ַ address��������� IP ��ַ����Ч���汾��

��ν��Ч�� IP ��ַ����ʵ������ "[.]" ������ÿ�� "."��

ʾ�� 1��
���룺address = "1.1.1.1"
�����"1[.]1[.]1[.]1"

ʾ�� 2��
���룺address = "255.100.50.0"
�����"255[.]100[.]50[.]0"
*/

char * defangIPaddr(char * address){
    int len=strlen(address);
    int k=0;
    char *a=(char *)malloc(sizeof(char)*len+7);
   
    for(int i=0;i<len;i++){
        if(address[i]=='.'){
            a[i+2*k]='[';                           //�ָ�ɵĵ�ÿһС�鶼��ԭ�ȶ��������ַ� 
            a[i+2*k+1]='.';
            a[i+2*k+2]=']';
            k++;
        }
        else{
            a[i+2*k]=address[i];
        }
    }
   
    a[len+6]='\0';                                  //�������� 
    return a;
}

/*���������� �����
char * defangIPaddr(char * address){
int a, b, c, d;
char *str = malloc((strlen(address) + 10) * sizeof(char));

sscanf(address, "%d.%d.%d.%d", &a, &b, &c, &d);
sprintf(str, "%d[.]%d[.]%d[.]%d" , a, b, c, d);

return str;
}

���ͣ�
sscanf��scanf���ƣ�������������ģ�ֻ�Ǻ����Լ���(stdin)Ϊ����Դ��ǰ���Թ̶��ַ���Ϊ����Դ��
*/ 
