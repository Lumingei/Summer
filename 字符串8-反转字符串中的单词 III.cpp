/*��ת�ַ����еĵ��� III
����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��

ʾ�� 1:
����: "Let's take LeetCode contest"
���: "s'teL ekat edoCteeL tsetnoc" 

ע�⣺���ַ����У�ÿ�������ɵ����ո�ָ��������ַ����в������κζ���Ŀո�
*/

char *reversewords1(int start,int end,char *s){           //��ת�������ʺ��� 
    while(start<end){                                     //��start,end��ǵ���ʼĩ 
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    return s;
}
char * reverseWords(char * s){
    int len=strlen(s);
    int index=0;
    for(int i=0;i<=len;i++){
        if(s[i]==' '){
            reversewords1(index,i-1,s);                  //�����ո񣬼�ʱ��ת���� 
            index=i+1;
            }
        if(s[i]=='\0')                                   //�����һ�����ʵĴ��� 
            reversewords1(index,i-1,s);   
    }
    return s;
}
