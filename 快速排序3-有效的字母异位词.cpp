/*有效的字母异位词
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

示例 1:
输入: s = "anagram", t = "nagaram"
输出: true
*/

int compare(const void *a,const void *b){
    return (*(char *)a-*(char *)b);
}
bool isAnagram(char * s, char * t){
    qsort(s,strlen(s),sizeof(char),compare);               //快排 
    qsort(t,strlen(t),sizeof(char),compare);
    if(strcmp(s,t)==0)                                     //比较两个字符串 
        return true;
    else
        return false;
}
