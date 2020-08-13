/*颜色分类 
给定一个包含红色、白色和蓝色，一共?n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。
此题中，我们使用整数 0、?1 和 2 分别表示红色、白色和蓝色。

注意:
不能使用代码库中的排序函数来解决这道题。

示例:
输入: [2,0,2,1,1,0]
输出: [0,0,1,1,2,2]
*/

void sortColors(int* nums, int numsSize){

    int r=0,w=0,b=0;                                  
    int i;
    for(i=0;i<numsSize;i++){                        //红白蓝依次分类 
        if(nums[i]==0)
            r++;
        if(nums[i]==1)
            w++;
        if(nums[i]==2)
            b++;  
    }    
    for(i=0;i<r;i++)                               //三次for 循环依次排列 
        nums[i]=0;
    for(i=r;i<r+w;i++) 
        nums[i]=1;
    for(i=r+w;i<numsSize;i++) 
        nums[i]=2;
    return nums;
}
