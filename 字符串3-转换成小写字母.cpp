/*转换成小写字母
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

示例 ：
输入: "Hello"
输出: "hello"
*/

char * toLowerCase(char * str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(isupper(str[i]))                         //isupper() 函数用来检测一个字符是否是大写字母
            str[i]=tolower(str[i]);                 //tolower() 函数用来将大写字母转换为小写字母
    }
    return str;
}

/*法二：（常规方法） 
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


