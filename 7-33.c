/*
7-33 统计素数并求和 （20 分）
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:
10 31
输出样例:
7 143
*/
#include <stdio.h>


int main() 
{   
    int n, m, prime[128], prime_num=0, x=2, sum=0, is_prime, num=0;
    scanf("%d %d", &n, &m);
    while (x <= m)
    {   
        is_prime = 1;
        for (int i=0;i<prime_num; i++)
        {
            if(x % prime[i] == 0)
            {
                is_prime = 0;
                break;
            }
            
        }
        if (is_prime)
        {
            prime[prime_num] = x;
            prime_num++;
            if (x >= n)
            {
                sum += x;
                num++;
            }
        }
        x++;
    }
    printf("%d %d", num, sum);
    return 0;
}
