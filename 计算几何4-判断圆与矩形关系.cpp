/*�ж�Բ����ι�ϵ
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

double a, b, xa, ya, xb, yb, r;

double far(double n1, double m1, double n2, double m2)
{
    double ans;
    ans = (n1 - n2) * (n1 - n2) +(m1 - m2) * (m1 - m2);
    ans = sqrt(ans);
    return ans;
}

double max(double x, double y)
{
    if (x > y)
        return x;
    else
        return y;
}

double min(double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf", &a, &b, &r, &xa, &ya, &xb, &yb);
        if (
                far(xa, ya, a, b) < r &&
                far(xa, yb, a, b) < r &&
                far(xb, ya, a, b) < r &&
                far(xb, yb, a, b) < r //������Բ����
            )
        {
            printf("NO\n");
            continue;
        }
        else if (
                    far(xa, ya, a, b) > r &&
                    far(xa, yb, a, b) > r &&
                    far(xb, ya, a, b) > r &&
                    far(xb, yb, a, b) > r &&
                    far(xa, ya, xb, ya) > 2*r &&
                    far(xa, ya, xa, yb) > 2*r //Բ�ھ�������
                )
        {
            printf("NO\n");
            continue;
        }
        else if (
                    far(xa, ya, a, b) <= r ||
                    far(xa, yb, a, b) <= r ||
                    far(xb, ya, a, b) <= r ||
                    far(xb, yb, a, b) <= r       //������Բ��
                )
        {
            printf("YES\n");
            continue;
        }
        else if(
                    (far(xa, b, a, b) <= r && b < max(ya, yb) && b > min(ya, yb))||
                    (far(xb, b, a, b) <= r && b < max(ya, yb) && b > min(ya, yb))||
                    (far(a, ya, a, b) <= r && a < max(xa, xb) && a > min(xa, xb))||
                    (far(a, yb, a, b) <= r && a < max(xa, xb) && a > min(xa, xb))  //���㲻��Բ�ڵ��Ǳߺ�Բ�ཻ
                )
        {
            printf("YES\n");
            continue;
        }
        else
        {
            printf("NO\n");
            continue;
        }

    }
    return 0;
}

//�ο���https://blog.csdn.net/weixin_30783913/article/details/96719963 
