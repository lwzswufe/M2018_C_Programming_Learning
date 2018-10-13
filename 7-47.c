/*
7-47 二进制的前导的零 （10 分）
计算机内部用二进制来表达所有的值。一个十进制的数字，比如18，在一个32位
的计算机内部被表达为00000000000000000000000000011000。可以看到，从左边
数过来，在第一个1之前，有27个0。我们把这些0称作前导的零。

现在，你的任务是写一个程序，输入一个整数，输出在32位表达下它前导的零的个数。

输入格式:
一个整数，在32位的整数可以表达的范围内。

输出格式:
一个整数，表达输入被表达为一个32位的二进制数时，在第一个1之前的0的数量。

输入样例:
256
输出样例:
23

*/
#include <stdio.h>


int main() 
{   
    int n=0;
    long X;
    scanf("%ld", &X);
    if (X < 0)
    {
        printf("0");
        return 0;
    }
    if (X == 0)
    {
        printf("32");
        return 0;
    }
    while(X > 0)
    {
       n++;
       X /= 2;
    }
    printf("%d", 32 - n);
    return 0;
}