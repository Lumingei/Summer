/*0��n-1��ȱʧ������
һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ�
�ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�

ʾ�� 1:
����: [0,1,3]
���: 2
*/

int missingNumber(int* nums, int numsSize){                         //���ַ����� 
   
    int low=0,high=numsSize-1;
    int mid;
   
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==mid)                                          //����±����Ӧ������ȣ�˵��ǰ�벿�ֶ��ǰ��������ź��˵ģ�������ں�벿�� 
            low=mid+1;
        else                                                        //����ȣ�˵��ǰ�벿�������⣬�����п�ȱ���´�λ���±����Ӧ���ֲ���� 
            high=mid-1;

    }
    return low;
}

/*��һ�ֲ��ö��ַ�˼·��Ϊ�򵥵ķ��������ڴ����ĸ��� 
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
