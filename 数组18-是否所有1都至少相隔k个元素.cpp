/*�Ƿ����� 1 ��������� k ��Ԫ��
����һ�������� 0 �� 1 ��ɵ����� nums �Լ����� k��������� 1 ��������� k ��Ԫ�أ��򷵻� True �����򣬷��� False ��

ʾ�� 1��
���룺nums = [1,0,0,0,1,0,0,1], k = 2
�����true
���ͣ�ÿ�� 1 ��������� 2 ��Ԫ�ء�
*/ 

bool kLengthApart(int* nums, int numsSize, int k){
    int res=-12345;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1)
            if(i-res>k)                                  //res��ʾ�ϸ�1��λ�ã�����뵱ǰ��1�������k�����res��λ����ǰŲһ��������ѭ�� 
                res=i;
            else
                return false;                            //һ�����־��벻����k�������˵���������⣬����false 
    }
    return true;                                         //ֻ�б��������е�1���Ҿ������Ҫ�󣬲��ܷ���true 
}
