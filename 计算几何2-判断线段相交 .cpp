/*���㼸��2-�ж��߶��ཻ 
����������:
typedef struct {
double x, y;
} Point;
Point A1,A2,B1,B2;

������������ʵ�飺
a.�����ų�ʵ��
�����߶�A1A2���߶�B1B2Ϊ�Խ��ߵľ���ΪM,N;
��M,N ���ཻ���������߶���Ȼ���ཻ��
���ԣ������һ������ʱ�������߶ο����ཻ��

b.����ʵ��
������߶��ཻ�������߶α�Ȼ�໥�����Է�.��A1A2����B1B2����ʸ��( A1 - B1 ) ��(A2-B1)λ��ʸ��(B2-B1)�����࣬
��(A1-B1) �� (B2-B1) * (A2-B1) �� (B2-B1)<0��
��ʽ�ɸ�д��(A1-B1) �� (B2-B1) * (B2-B1) �� (A2-A1)>0��
Ӧ���ж����Σ��������߶ζ�ҪΪֱ�ߣ��ж���һֱ�ߵ����˵��Ƿ��������ߣ����������߶��ཻ��
������������ʵ���ǲ��еģ�������������

�������߶���ͬһ��ֱ���ϡ���������Ҫͬʱ�������ο����Ϳ����ų�ʵ�顣

(A1-B1) �� (B2-B1) * (B2-B1) �� (A2-A1) >= 0
(B1-A1) �� (A2-A1) * (A2-A1) �� (B2-A1) >= 0
*/
 
#include<stdio.h>
#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
typedef struct {
double x,y;
}Point;
Point A1,A2,B1,B2;
Point  A1B1, B2B1, A2A1, B2A1;
double xx(Point &s,Point &t)
{
    return (s.x*t.y+s.y*t.x);
}
int kua()                           //����ʵ��
{
    A1B1.x=A1.x-B1.x;  A1B1.y=A1.y-B1.y;
    B2B1.x=B2.x-B1.x;  B2B1.y=B2.y-B1.y;
    A2A1.x=A2.x-A1.x;  A2A1.y=A2.y-A1.y;
    B2A1.x=B2.x-A1.x;  B2A1.y=B2.y-A1.y;
    if(xx(A1B1,B2B1)*xx(B2B1,A2A1)>=0)
    {
        A1B1.y=-A1B1.y;A1B1.x=-A1B1.x;
        if(xx(A1B1,A2A1)*xx(A2A1,B2A1)>=0)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    Point A1,A2,B1,B2;
    int flag=1,i,j,a,b,c,d,e,f;
    while(1)
    {
        scanf("%lf%lf%lf%lf",&A1.x,&A1.y,&A2.x,&A2.y);
        scanf("%lf%lf%lf%lf",&B1.x,&B1.y,&B2.x,&B2.y);
        if( min(A1.x,A2.x) <= max(B1.x,B2.x) &&
            min(B1.x,B2.x) <= max(A1.x,A2.x) &&
            min(A1.y,A2.y) <= max(B1.y,B2.y) &&
            min(B1.y,B2.y) <= max(A1.y,A2.y)   )   //�����ų�ʵ��
        {
            if(kua())
                printf("�߶��ཻ\n");
            else
                printf("�߶β��ཻ\n");
        }
        else
            printf("�߶β��ཻ\n");
 
    }
    return 0;
}
//�ο���https://blog.csdn.net/iteye_15968/article/details/82307016?utm_medium=distribute.pc_relevant_download.none-task-blog-blogcommendfrombaidu-1.nonecase&depth_1-utm_source=distribute.pc_relevant_download.none-task-blog-blogcommendfrombaidu-1.nonecas 
