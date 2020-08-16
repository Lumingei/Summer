/*翻转单词顺序
输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。为简单起见，标点符号和普通字母一样处理。
例如输入字符串"I am a student. "，则输出"student. a am I"。

示例 1：
输入: "the sky is blue"
输出: "blue is sky the"

示例 2：
输入: "  hello world!  "
输出: "world! hello"
解释: 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
*/

//思路：先把字符串整个翻转，再分隔单词，然后依次翻转各个单词
 
void reverseStr(char *s){                             //翻转整个字符串
    int len=strlen(s);
    char a;
    for(int i=0;i<len/2;i++){
        a=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=a;
    }
}
char* reverseWords(char* s){
    char *delim=" ";                                 //分隔符为空格
    char *word=NULL;
    int len=strlen(s);
    int j=0;
    char *str=(char *)malloc(sizeof(char)*len+1);   //申请足够空间，比实际长度要大
    if(s==NULL || len==0)
        return s;
    memset(str,'\0',sizeof(char)*len+1);            //内存初始化 

    reverseStr(s);
    word=strtok(s,delim);                           //调用strtok函数，分解字符串为n组单词
    while(word!=NULL){
        reverseStr(word);                           //翻转单词
        for(int i=0;i<strlen(word);i++){
            str[j++]=word[i];
        }
        str[j++]=' ';                               //单词结束，加上空格
        word=strtok(NULL,delim);
    }
    if(j>0)
        str[j-1]='\0';

    return str;    
}

/*关于strtok函数
头文件:#include <string.h>
函数原型：char *strtok(char *s, const char *delim);
Function：分解字符串为一组字符串。s为要分解的字符串，delim为分隔符字符串。
Description：strtok()用来将字符串分割成一个个片段。
参数s指向欲分割的字符串，参数delim则为分割字符串，当strtok()在参数s的字符串中发现到参数delim的分割字符时则会将该字符改为\0 字符。
在第一次调用时，strtok()必需给予参数s字符串，往后的调用则将参数s设置成NULL。每次调用成功则返回被分割出片段的指针。
*/
