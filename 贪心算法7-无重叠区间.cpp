/*无重叠区间
给定一个区间的集合，找到需要移除区间的最小数量，使剩余区间互不重叠。
注意:
可以认为区间的终点总是大于它的起点。
区间 [1,2] 和 [2,3] 的边界相互“接触”，但没有相互重叠。

示例 1:
输入: [ [1,2], [2,3], [3,4], [1,3] ]
输出: 1
解释: 移除 [1,3] 后，剩下的区间没有重叠。
*/

int compare(const void *a, const void *b) {                    //快排，注意二级指针使用以及返回值 
    int *range1 = *(int **)a;
    int *range2 = *(int **)b;
    if (range1[1] == range2[1]) {
        return range2[0] - range1[0];
    }  else {
        return range1[1] - range2[1];
    } 
}

int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize){
    if (intervalsSize < 2) {
        return 0;
    }
    int num = 0;
    int temp = 0;
    qsort(intervals, intervalsSize, sizeof(intervals[0]), compare);
    temp = intervals[0][1];
    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] < temp) {
            ++num;
        } else {
            temp = intervals[i][1];
        }
    }
    return num;
}

