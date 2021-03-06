/*
7-37 输出整数各位数字 （15 分）
本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。

输入格式：
输入在一行中给出一个长整型范围内的非负整数。

输出格式：
从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。

输入样例：
123456
输出样例：
1 2 3 4 5 6 
*/
#include <stdio.h>


int main() 
{   
    long N=1, x;                    // 注意 长整型
    scanf("%ld", &x);               // ld
    if(N == 0)
        printf("0 ");
    while(N <= x / 10)
    {
        N *= 10;
    }
    while(N > 0)
    {   
        printf("%ld ", x / N);
        x = x % N;
        N /= 10;
    }
    return 0;
}
