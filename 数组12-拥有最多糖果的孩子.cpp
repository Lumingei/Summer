/*拥有最多糖果的孩子 
给你一个数组candies和一个整数extraCandies，其中candies[i]代表第 i 个孩子拥有的糖果数目。

对每一个孩子，检查是否存在一种方案，将额外的?extraCandies个糖果分配给孩子们之后，此孩子有 最多?的糖果。注意，允许有多个孩子同时拥有 最多的糖果数目。

示例 1：
输入：candies = [2,3,5,1,3], extraCandies = 3
输出：[true,true,true,false,true] 
解释：
孩子 1 有 2 个糖果，如果他得到所有额外的糖果（3个），那么他总共有 5 个糖果，他将成为拥有最多糖果的孩子。
孩子 2 有 3 个糖果，如果他得到至少 2 个额外糖果，那么他将成为拥有最多糖果的孩子。
孩子 3 有 5 个糖果，他已经是拥有最多糖果的孩子。
孩子 4 有 1 个糖果，即使他得到所有额外的糖果，他也只有 4 个糖果，无法成为拥有糖果最多的孩子。
孩子 5 有 3 个糖果，如果他得到至少 2 个额外糖果，那么他将成为拥有最多糖果的孩子。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool *a=(bool *)malloc(sizeof(bool)*candiesSize);                                          //布尔型变量 
    int max=candies[0];
    for(int i=0;i<candiesSize;i++){
        max=candies[i]>max?candies[i]:max;                                                     //先找出数组中的最大值 
        candies[i]+=extraCandies;                                                              //让每个数加上额外的糖果数 
    }
    for(int j=0;j<candiesSize;j++){
        a[j]=candies[j]>=max?true:false;                                                       //加上额外糖果数后如果数值大于等于原来的最大值，则可以成为拥有糖果最多的孩子，反之不能 
    }
    *returnSize=candiesSize;
    return a;
}
