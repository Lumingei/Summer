/*判断能否形成等差数列
给你一个数字数组 arr 。
如果一个数列中，任意相邻两项的差总等于同一个常数，那么这个数列就称为 等差数列 。
如果可以重新排列数组形成等差数列，请返回 true ；否则，返回 false 。

示例 1：
输入：arr = [3,5,1]
输出：true
解释：对数组重新排序得到 [1,3,5] 或者 [5,3,1] ，任意相邻两项的差分别为 2 或 -2 ，可以形成等差数列。
*/

bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i,j,temp;
    for(i=0;i<arrSize-1;i++){                                    //冒泡排序 
        for(j=0;j<arrSize-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=1;i<arrSize-1;i++){
        if(arr[i]-arr[i-1]!=arr[i+1]-arr[i])                     //判断等差数列条件 
            return false;
    }
    return true;
}
