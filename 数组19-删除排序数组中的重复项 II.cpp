/*删除排序数组中的重复项 II
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

示例1:

给定 nums = [1,1,1,2,2,3],

函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。

你不需要考虑数组中超出新长度后面的元素。
*/ 

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) 
        return 0;
    int j=1,k=1;                                       //用j记录重复次数，用k记录长度 
    for (int i=1;i<numsSize;i++){
        if(nums[i] != nums[i-1]){
            nums[k++] = nums[i];
            j = 1;                                     //无重复项，k一直为1 
        }
        else{
            j++;
            if (j == 2)                                //重复超过2次，此步骤不会执行，即长度不会增加，起到“删减”的作用 
                nums[k++] = nums[i];
        }
    }
    return k;
}
