/*反转字符串中的单词 III
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

示例 1:
输入: "Let's take LeetCode contest"
输出: "s'teL ekat edoCteeL tsetnoc" 

注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。
*/

char *reversewords1(int start,int end,char *s){           //翻转单个单词函数 
    while(start<end){                                     //用start,end标记单词始末 
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
            reversewords1(index,i-1,s);                  //遇到空格，即时翻转单词 
            index=i+1;
            }
        if(s[i]=='\0')                                   //对最后一个单词的处理 
            reversewords1(index,i-1,s);   
    }
    return s;
}
