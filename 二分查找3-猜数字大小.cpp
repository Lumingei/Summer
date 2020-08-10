/*猜数字大小 
猜数字游戏的规则如下：

每轮游戏，系统都会从1到n 随机选择一个数字。 请你猜选出的是哪个数字。
如果你猜错了，系统会告诉你这个数字比系统选出的数字是大了还是小了。
你可以通过调用一个预先定义好的接口guess(int num) 来获取猜测结果，返回值一共有 3 种可能的情况（-1，1或 0）：

-1 : 系统选出的数字比你猜测的数字小
 1 : 系统选出的数字比你猜测的数字大
 0 : 恭喜！你猜对了！

示例 :
输入: n = 10, pick = 6
输出: 6
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){                                    //二分查找法的变形 
	
	long int low=0,high=n;                                 //采用长整型，避免数据溢出 
    long int mid;
   
    while(low<=high){
        mid=(low+high)/2;
        int a=guess(mid);                                  //将中位数设置为要猜的数 
        if(a==0)
            return mid;
        else if(a==-1)
            high=mid-1;                                    //舍弃后半部分 
        else if(a==1)
            low=mid+1;                                     //舍弃前半部分 
    }
   
    return mid;                                           
}
