/*0～n-1中缺失的数字
一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。
在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

示例 1:
输入: [0,1,3]
输出: 2
*/

int missingNumber(int* nums, int numsSize){                         //二分法变形 
   
    int low=0,high=numsSize-1;
    int mid;
   
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==mid)                                          //如果下标与对应数字相等，说明前半部分都是按照增序排好了的，问题出在后半部分 
            low=mid+1;
        else                                                        //不相等，说明前半部分有问题，数字有空缺导致此位置下标与对应数字不相等 
            high=mid-1;

    }
    return low;
}

/*另一种不用二分法思路较为简单的方法，但内存消耗更大 
int missingNumber(int* nums, int numsSize){
    int i = 0;
    while (i<numsSize )
    {
        if(nums[i]==i)
            i++;
        else
           return i;
    }
    return i;
}
*/ 
