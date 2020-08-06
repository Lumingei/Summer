/*加一
给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

示例1:
输入: [1,2,3]
输出: [1,2,4]
解释: 输入数组表示数字 123。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i=digitsSize-1;
    digits[i]++;
    while(digits[i]==10){                                             //判断进位条件 
        i--;
        if(i==-1){                                                    //说明是最高位进位 
            *returnSize=digitsSize+1;
            int *a=(int *)malloc(sizeof(int)*(digitsSize+1));
            a[0]=1;
            for(int j=1;j<digitsSize+1;j++)
                a[j]=0;
            return a;
        }
        digits[i]++;                                                  //不是最高位，先使前一位数字加一，即进位 
    }
    for(int k=i+1;k<digitsSize;k++)
        digits[k]=0;                                                  //使后续位数上的数为0 
        *returnSize=digitsSize;
        return digits;
}
