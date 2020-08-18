/*判定是否互为字符重排
给定两个字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。

示例 1：
输入: s1 = "abc", s2 = "bca"
输出: true 

示例 2：
输入: s1 = "abc", s2 = "bad"
输出: false
*/ 

 
bool CheckPermutation(char* s1, char* s2){
    int len1=strlen(s1);
    int len2=strlen(s2);
    char a[26]={0};                              //新建数组，储存出现的字母的次数 

    if(len1!=len2)
        return false;
    for(int i=0;i<len1;i++){                            
        a[s1[i]-'a']++;                         //某个字母在s1中出现一次，a数组相应位置的数值+1 
        a[s2[i]-'a']--;                         //某个字母在s2中出现一次，a数组相应位置的数值-1 
    }
     for(int i=0;i<26;i++){                     //若能重排，则某一字母在s1和s2中出现的次数相同，+1-1相互抵消，a数组相应位置数值还是0 
         if(a[i]!=0)
            return false;
     }
     return true;
}
