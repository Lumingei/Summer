/*玩筹码
数轴上放置了一些筹码，每个筹码的位置存在数组 chips 当中。
你可以对 任何筹码 执行下面两种操作之一（不限操作次数，0 次也可以）：
将第 i 个筹码向左或者右移动 2 个单位，代价为 0。
将第 i 个筹码向左或者右移动 1 个单位，代价为 1。
最开始的时候，同一位置上也可能放着两个或者更多的筹码。
返回将所有筹码移动到同一位置（任意位置）上所需要的最小代价。

示例：
输入：chips = [1,2,3]
输出：1
解释：第二个筹码移动到位置三的代价是 1，第一个筹码移动到位置三的代价是 0，总代价为 1。
*/ 

int minCostToMoveChips(int* position, int positionSize){ 
    int a=0,b=0;
    for(int i=0;i<positionSize;i++){            //将偶数位的数集中到2x的位置，将奇数位的数集中到2x+1的位置，代价都为0 
        if(position[i]%2==0)                     
            a++;
        else
            b++;
    }
    if(a>=b)                                   ////比较偶数位和奇数位哪个数目更少，即返回 
        return b;
    else
        return a;
}

/*法二：（暴力解法）
int minCostToMoveChips(int* chips, int chipsSize){
    
    int cost = 0;
    int retAns = 100000000;
    int distance = 0;
    for (int i = 0; i < chipsSize; i++) {
        for (int j = 0; j < chipsSize; j++) {
            distance = abs(chips[j] - chips[i]);
            if (distance % 2 == 1) {
                cost++;
            }
        }
        retAns = (retAns > cost) ? cost : retAns;
        cost = 0;
    }

    return retAns;
}
*/ 

 
