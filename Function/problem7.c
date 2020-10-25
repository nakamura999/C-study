#include <stdio.h>

double circumference(double);
double area(double);
  
void main(){
    double radius;   //  円の半径
    double circum; // 円周の長さ
    double menseki;     //  円の面積
    printf("円の半径=");
    scanf("%lf",&radius);
    circum = circumference(radius);
    menseki = area(radius);
    printf("円週の長さ : %lf\n", circum);
    printf("円の面積 : %lf\n", menseki);
}

double circumference(double n){
    return 2 * n * 3.14;
}

double area(double a){
    return a * a * 3.14;
}