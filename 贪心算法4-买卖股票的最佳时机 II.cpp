/*买卖股票的最佳时机 II
给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。
注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。

示例:
输入: [7,1,5,3,6,4]
输出: 7
解释: 在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5-1 = 4 。
     随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6-3 = 3 。
*/ 


int maxProfit(int* prices, int pricesSize){
    if(pricesSize<2)
        return;
        
    int i,temp,result=0;
    
    for(i=1;i<pricesSize; i++){
        temp = prices[i]-prices[i-1];            //差值大于0，则加到利润中 
        if(temp>0)
            result+=temp;
    }
    return result;
}


//方法二：一次遍历
//低卖高卖，当价格下降时找到最低点买入
//当价格上升时找到最高点卖出
int maxProfit(int* prices, int pricesSize){
    int i = 0;
    int iMinPos = 0;
    int iMax = 0;
    int iTmp = 0;
    int iSum = 0;

    for(i = 1; i < pricesSize; i++){
        if(prices[i] < prices[i - 1]){    //当价格下降时找到最低点买入，并计算当前总利润
            iSum += iMax;
            iMinPos = i;
            iMax = 0;
        }
        else{                            //当价格上升时找到最高点卖出，iMax为本次交易最大利润
            iTmp = prices[i] - prices[iMinPos];
            if(iTmp > iMax){
                iMax = iTmp;
            }
        }
    }
    
    iSum += iMax;                       //计算最后一次交易利润
    return iSum;
}

