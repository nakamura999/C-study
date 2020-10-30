#include<stdio.h>
#include<math.h>
void main() {
    double x1;
    double y1;
    double x2;
    double y2;
    double kyori;

    printf("一つ目のベクトルのX：");
    scanf("%lf",&x1);
    printf("一つ目のベクトルのY：");
    scanf("%lf",&y1);
    printf("二つ目のベクトルのX：");
    scanf("%lf",&x2);
    printf("二つ目のベクトルのY：");
    scanf("%lf",&y2);

    kyori = sqrt((double)((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
    printf("(%lf,%lf)と(%lf,%lf)の距離は%3.6fです\n",x1,y1,x2,y2,(double)kyori);
}

