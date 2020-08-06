/*多数元素
给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 n/2 的元素。

你可以假设数组是非空的，并且给定的数组总是存在多数元素。

示例1:
输入: [3,2,3]
输出: 3

示例2:
输入: [2,2,1,1,1,2,2]
输出: 2
*/

int majorityElement(int* nums, int numsSize){                  //摩尔投票求众数，关键在于“抵消” 
    int index=nums[0];
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==index)
            count++;                                           //数值相同，加一 
        else
            count--;                                           //数值不同，减一抵消，即目标数值与非目标数值相互抵消 
        if(count==0)
            index=nums[i+1];                                   
    }
    return index;                                              //剩下的无法抵消的数即为所求数值 
}

//跟鬼子肉搏。1打1会同归于尽。要想获胜只能使用人海战术，最起码要比鬼子人数多一个，也就是大于 n/2

//算法解释参考：https://www.zhihu.com/question/49973163?sort=created 
