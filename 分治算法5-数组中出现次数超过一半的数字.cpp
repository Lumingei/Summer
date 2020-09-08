/*数组中出现次数超过一半的数字
数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。

示例 :
输入: [1, 2, 3, 2, 2, 2, 5, 4, 2]
输出: 2
*/

//快速排序法 
int majorityElement(int* nums, int numsSize){
 int cmp(const void* a,const void* b){
     return *(int*)a-*(int*)b;
 }
 qsort(nums,numsSize,sizeof(int),cmp);
 return nums[numsSize/2];
}

/*摩尔投票法
int majorityElement(int* nums, int numsSize){
    int count=0;
    int res=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]==res) 
			count++;
        else 
			count--;
        if(count==0)
            res=nums[i+1]; 
    }
    return res;
}
*/

 
