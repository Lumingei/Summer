/*���������
*/
struct Point2d
{
    double x;
    double y;
    Point2d(double xx, double yy): x(xx), y(yy){}
};
 
//�����������ε���������㰴��˳ʱ�������ʱ�뷽������
double ComputePolygonArea(const vector<Point2d> &points)
{
    int point_num = points.size();
    if(point_num < 3)return 0.0;
    double s = points[0].y * (points[point_num-1].x - points[1].x);
    for(int i = 1; i < point_num; ++i)
        s += points[i].y * (points[i-1].x - points[(i+1)%point_num].x);
    return fabs(s/2.0);
}

//�ο���https://blog.csdn.net/weixin_34109408/article/details/93502020?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param 
