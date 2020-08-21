/*判断点是否在多边形内
函数的输入：
（1）当前点的坐标p
（2）区域顶点数组pt[]；
（3）顶点数nCount
 输出： 在区域内返回TRUE，否则返回FALSE。
 
 Point类型是一个结构：
 struct Point
 {
    类型 x;//此处类型根据采用的经纬度类型决定。
    类型 y;
 };
*/
BOOL PtInPolygon(Point p, Point pt[], int nCount)
{
   int nCross = 0;
   for (int i = 0; i < nCount; i++)
   {
      Point p1 = pt[i];
      Point p2 = pt[(i + 1) % nCount];
      if (p1.y == p2.y)
      {
         if (p.y == p1.y && p.x >= min(p1.x, p2.x) && p.x <= max(p1.x, p2.x))
            return true;
         continue;
      }
      if (p.y < min(p1.y, p2.y) || p.y > max(p1.y, p2.y))
         continue;
     double x = (double)(p.y - p1.y) * (double)(p2.x - p1.x) / (double)(p2.y - p1.y) + p1.x;

     if (x > p.x)
           nCross++;
     else if (x == p.x)
        return true;
   }
    if (nCross % 2 == 1)
       return true;
     return false;
}

//参考：https://blog.csdn.net/MingoJiang/article/details/8159618?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param 
