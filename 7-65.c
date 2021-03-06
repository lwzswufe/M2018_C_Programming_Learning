/*
7-65 平面向量加法 （15 分）
本题要求编写程序，计算两个二维平面向量的和向量。

输入格式:
输入在一行中按照“x1 y1 x2 y2”的格式给出两个二维平面向量
v1 =(x1 ,y1 )和v2 =(x2 ,y2)的分量。

输出格式:
在一行中按照(x, y)的格式输出和向量，坐标输出小数点后一位（注意不能输出−0.0）。

输入样例:
3.5 -2.7 -13.9 8.7
输出样例:
(-10.4, 6.0)
*/
#include <stdio.h>

int main() 
{   
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    x1 += x2;
    y1 += y2;
    if (x1 < 0.0 && x1 > -0.05)
        x1 = 0.0;
    if (y1 < 0.0 && y1 > -0.05)
        y1 = 0.0;
    printf("(%.1lf, %.1lf)", x1, y1);
    return 0;
}
