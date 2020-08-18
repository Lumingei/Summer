/* 特殊等价字符串组
你将得到一个字符串数组 A。
每次移动都可以交换 S 的任意两个偶数下标的字符或任意两个奇数下标的字符。
如果经过任意次数的移动，S == T，那么两个字符串 S 和 T 是 特殊等价 的。
例如，S = "zzxy" 和 T = "xyzz" 是一对特殊等价字符串，因为可以先交换 S[0] 和 S[2]，然后交换 S[1] 和 S[3]，使得 "zzxy" -> "xzzy" -> "xyzz" 。
现在规定，A 的 一组特殊等价字符串 就是 A 的一个同时满足下述条件的非空子集：
该组中的每一对字符串都是 特殊等价 的
该组字符串已经涵盖了该类别中的所有特殊等价字符串，容量达到理论上的最大值（也就是说，如果一个字符串不在该组中，那么这个字符串就 不会 与该组内任何字符串特殊等价）
返回 A 中特殊等价字符串组的数量。

示例 1：
输入：["abcd","cdab","cbad","xyzz","zzxy","zzyx"]
输出：3
解释：
其中一组为 ["abcd", "cdab", "cbad"]，因为它们是成对的特殊等价字符串，且没有其他字符串与这些字符串特殊等价。
另外两组分别是 ["xyzz", "zzxy"] 和 ["zzyx"]。特别需要注意的是，"zzxy" 不与 "zzyx" 特殊等价。
*/

int compareChar(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int compareStr(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int numSpecialEquivGroups(char ** A, int ASize){
    for (int i=0;i<ASize;i++) {
        int len=strlen(A[i]);
        for (int idx1=1,idx2=len-1-(len%2==0);idx1<idx2;idx1+=2,idx2-=2) {
            char temp=A[i][idx1];
            A[i][idx1]=A[i][idx2];
            A[i][idx2]=temp;
        }
        
        int odds=len/2,evens=len-odds;
        qsort(A[i],evens,sizeof(A[i][0]),compareChar);
        qsort(A[i]+evens,odds,sizeof(A[i][evens]),compareChar);
    }
    qsort(A,ASize,sizeof(A[0]),compareStr);
    
    int count=1; 
    for(int i=1;i<ASize;i++){
    	if (strcmp(A[i],A[i-1])!=0){
            count++;
        }
    }
    return count;
}

