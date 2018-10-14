/*
7-50 近似求PI （15 分）
本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。

π/2 =1+1!/3 + 2!/(3×5) + 3!/(3×5×7) ......+ i!/(3×5×⋯×(2×i+1))

输入格式：
输入在一行中给出精度eps，可以使用以下语句来读输入：

scanf("%le", &eps);
输出格式：
在一行内，按照以下格式输出π的近似值（保留小数点后5位）：

PI = 近似值
输入样例：
1E-5
输出样例：
PI = 3.14158

*/
#include <stdio.h>


int main() 
{   
    double eps, pi=0.0, numerator=1.0, denominator=1.0, diff=1.0;
    int i = 0;
    scanf("%le", &eps);
    pi = diff;
    while(diff > eps)
    {   
        //printf("pi = %.8lf, d = %.8lf\n", pi, diff);
        
        i++;
        numerator *= i;
        denominator *= (i *2 + 1);
        //printf("n = %.lf, d = %.lf\n", numerator, denominator);
        diff = numerator/denominator;
        pi += diff;
    }
    printf("PI = %.5lf", pi * 2);
    return 0;
}
