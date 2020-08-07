/*是否所有 1 都至少相隔 k 个元素
给你一个由若干 0 和 1 组成的数组 nums 以及整数 k。如果所有 1 都至少相隔 k 个元素，则返回 True ；否则，返回 False 。

示例 1：
输入：nums = [1,0,0,0,1,0,0,1], k = 2
输出：true
解释：每个 1 都至少相隔 2 个元素。
*/ 

bool kLengthApart(int* nums, int numsSize, int k){
    int res=-12345;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1)
            if(i-res>k)                                  //res表示上个1的位置，如果与当前的1距离大于k，则把res的位置向前挪一步，依次循环 
                res=i;
            else
                return false;                            //一旦出现距离不大于k的情况，说明不合题意，返回false 
    }
    return true;                                         //只有遍历完所有的1，且距离符合要求，才能返回true 
}
