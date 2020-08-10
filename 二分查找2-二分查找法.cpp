/*���ֲ��� 
����һ��n��Ԫ������ģ�������������nums ��һ��Ŀ��ֵtarget ��дһ����������nums�е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��

ʾ�� 1:
����: nums = [-1,0,3,5,9,12], target = 9
���: 4
����: 9 ������ nums �в����±�Ϊ 4
*/

int search(int* nums, int numsSize, int target){
    int low=0;
    int high=numsSize-1;
    
    while(low<=high){
       
	    int mid=(low+high)/2;                            //����λ���Ƚ� 
        
		if(target>nums[mid])                             //ȷ���ں�벿�֣�����ǰһ�� 
            low=mid+1;									 //+1 -1 ���Ч�ʽ�ʡʱ�䣬���ֱ����mid���п��ܻᳬʱ 
        else{
            if(target<nums[mid])                         //ȷ����ǰ�벿�֣�������һ�� 
                high=mid-1;
            else
                return mid;                              //���ֻʣһ��Ԫ�أ�����Ŀ��ֵ��ͬ��ֱ�ӷ��أ����򷵻�-1 
        }
    }
    return -1;
}
