/*数组异或操作 
给你两个整数，n 和 start 。

数组 nums 定义为：nums[i] = start + 2*i（下标从 0 开始）且 n == nums.length 。

请返回 nums 中所有元素按位异或（XOR）后得到的结果。

示例 1：
输入：n = 5, start = 0
输出：8
解释：数组 nums 为 [0, 2, 4, 6, 8]，其中 (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8 。
     "^" 为按位异或 XOR 运算符。
*/

int xorOperation(int n, int start){
    int result=start;
    for(int i=1;i<n;i++)
        result=result^(start+2*i);
    return result;
}

/*异或操作解释：
异或运算符（^）
运算规则：0^0=0；  0^1=1；  1^0=1；   1^1=0；
即：参加运算的两个对象，如果两个位为“异”（值不同），则该位结果为1，否则为0。
例如：3^5 =  0000 0011 | 0000 0101 =0000 0110，因此，3^5 = 6 
*/ 
