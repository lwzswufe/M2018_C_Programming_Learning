/*
7-9 求整数均值 （10 分）
本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。

输入格式:
输入在一行中给出4个整数，其间以空格分隔。

输出格式:
在一行中按照格式“Sum = 和; Average = 平均值”顺序输出和与平均值，其中平均值精确到小数点后一位。

输入样例:
1 2 3 4
输出样例:
Sum = 10; Average = 2.5
*/
#include <stdio.h>

int main() 
{   
    int num = 4, temp, sum = 0;
    double avg = 0;
    for (int i=0; i<num; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    avg = sum * 1.0 / num;
    printf("Sum = %d; Average = %.1f", sum, avg);
    return 0;
}