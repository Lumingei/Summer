/*分割平衡字符串
在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。

给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。

返回可以通过分割得到的平衡字符串的最大数量。

示例 1：
输入：s = "RLRRLLRLRL"
输出：4
解释：s 可以分割为 "RL", "RRLL", "RL", "RL", 每个子字符串中都包含相同数量的 'L' 和 'R'。
*/

int balancedStringSplit(char * s){
    int len=strlen(s);
    int right=0,left=0,count=0;
    for(int i=0;i<len;i++){
        if(s[i]=='R')
            right++;
        else
            left++;
        if(right==left){                 //R,L数目相等，count+1,一轮结束，开始新一轮计数 
            count++;
            right=left=0;
        }
            
    }
    return count;
}
