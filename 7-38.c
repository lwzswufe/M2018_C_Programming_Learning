/*
7-38 支票面额 （15 分）
一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分。采购员用去了
n分之后才发觉有错，于是清点了余额尚有2y元2f分，问该支票面额是多少？

输入格式：
输入在一行中给出小于100的正整数n。

输出格式：
在一行中按格式y.f输出该支票的原始面额。如果无解，则输出No Solution。

输入样例1：
23
输出样例1：
25.51
输入样例2：
22
输出样例2：
No Solution
98f = 199 y + n
*/
#include <stdio.h>


int main() 
{   
    int n, i, j;
    scanf("%d", &n);
    for (i=0; i<100; i++)       // f
    {
        for(j=0; 2*j<i; j++)    // y
        {
            if (98 * i - 199 * j == n)
                goto out;
        }
    }
    printf("No Solution");
    return 0;
    out:
        printf("%d.%02d", j, i);
    return 0;
}
