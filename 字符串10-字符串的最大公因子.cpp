/*字符串的最大公因子
对于字符串 S 和 T，只有在 S = T + ... + T（T 与自身连接 1 次或多次）时，我们才认定 “T 能除尽 S”。
返回最长字符串 X，要求满足 X 能除尽 str1 且 X 能除尽 str2。

示例 1：
输入：str1 = "ABCABC", str2 = "ABC"
输出："ABC"
*/ 

char * gcdOfStrings(char * str1, char * str2){
    int len1,len2,i;
    len1=strlen(str1);
    len2=strlen(str2);
    
    char *s1=(char *)malloc(sizeof(char)*(len1+len2+1));          //申请两个新空间 
    char *s2=(char *)malloc(sizeof(char)*(len1+len2+1));
    s1[len1+len2]='\0';
    s2[len1+len2]='\0';
    strcpy(s1,str1);
    strcat(s1,str2);
    strcpy(s2,str2);
    strcat(s2,str1);

    if(strcmp(s1,s2)!=0)                                         //str1连在str2后和str2连在str1后应该是一样的，不一样返回 
        return "";
	i=len1%len2;
    while(i!=0){                                                 //辗转相除法求最大公约数 
        len1=len2;
        len2=i;
        i=len1%len2;
    }

    char *result=(char *)malloc(sizeof(char)*(len2+1));
    result[len2]='\0';
    for(int j=0;j<len2;j++)
        result[j]=str1[j];                                       //将最大公因子写进result 
    return result;
}
