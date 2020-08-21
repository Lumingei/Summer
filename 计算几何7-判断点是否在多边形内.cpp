/*�жϵ��Ƿ��ڶ������
���������룺
��1����ǰ�������p
��2�����򶥵�����pt[]��
��3��������nCount
 ����� �������ڷ���TRUE�����򷵻�FALSE��
 
 Point������һ���ṹ��
 struct Point
 {
    ���� x;//�˴����͸��ݲ��õľ�γ�����;�����
    ���� y;
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

//�ο���https://blog.csdn.net/MingoJiang/article/details/8159618?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param 
