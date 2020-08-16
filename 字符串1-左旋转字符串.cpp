/*左旋转字符串
字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。请定义一个函数实现字符串左旋转操作的功能。比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。

示例 1：
输入: s = "abcdefg", k = 2
输出: "cdefgab"
*/ 

char* reverseLeftWords(char* s, int n){
    int len=strlen(s);
    int j=0;
    char *a=(char *)malloc(sizeof(char)*len+1);
    
	for(int i=n;i<len;i++){                             //后半部分 
        a[j++]=s[i];
    }
    for(int i=0;i<n;i++){                               //前半部分 
        a[j++]=s[i];
    }
    
	a[j]='\0';                                          //结束符一定要写！ 
    return a;
}
