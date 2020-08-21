/*换酒问题 
小区便利店正在促销，用 numExchange 个空酒瓶可以兑换一瓶新酒。你购入了 numBottles 瓶酒。
如果喝掉了酒瓶中的酒，那么酒瓶就会变成空的。
请你计算 最多 能喝到多少瓶酒。

示例 1：
输入：numBottles = 9, numExchange = 3
输出：13
解释：你可以用 3 个空酒瓶兑换 1 瓶酒。
*/ 

int numWaterBottles(int numBottles, int numExchange){      //简单数学问题 
    int sum=numBottles,a=numBottles/numExchange,rest;      //a为商，rest为余数 
    while(a>0){
        a=numBottles/numExchange;
        rest=numBottles%numExchange;
        sum+=a;                                            //已经喝到的数量 
        numBottles=a+rest;;                                //能拿去换酒的数量 
    }
    return sum;
}
