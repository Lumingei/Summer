/*二分查找 
给定一个n个元素有序的（升序）整型数组nums 和一个目标值target ，写一个函数搜索nums中的 target，如果目标值存在返回下标，否则返回 -1。

示例 1:
输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
解释: 9 出现在 nums 中并且下标为 4
*/

int search(int* nums, int numsSize, int target){
    int low=0;
    int high=numsSize-1;
    
    while(low<=high){
       
	    int mid=(low+high)/2;                            //与中位数比较 
        
		if(target>nums[mid])                             //确定在后半部分，舍弃前一半 
            low=mid+1;									 //+1 -1 提高效率节省时间，如果直接用mid运行可能会超时 
        else{
            if(target<nums[mid])                         //确定在前半部分，舍弃后一半 
                high=mid-1;
            else
                return mid;                              //最后只剩一个元素，若和目标值相同，直接返回，否则返回-1 
        }
    }
    return -1;
}
