/*�ж��ܷ��γɵȲ�����
����һ���������� arr ��
���һ�������У�������������Ĳ��ܵ���ͬһ����������ô������оͳ�Ϊ �Ȳ����� ��
��������������������γɵȲ����У��뷵�� true �����򣬷��� false ��

ʾ�� 1��
���룺arr = [3,5,1]
�����true
���ͣ���������������õ� [1,3,5] ���� [5,3,1] ��������������Ĳ�ֱ�Ϊ 2 �� -2 �������γɵȲ����С�
*/

bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i,j,temp;
    for(i=0;i<arrSize-1;i++){                                    //ð������ 
        for(j=0;j<arrSize-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=1;i<arrSize-1;i++){
        if(arr[i]-arr[i-1]!=arr[i+1]-arr[i])                     //�жϵȲ��������� 
            return false;
    }
    return true;
}
