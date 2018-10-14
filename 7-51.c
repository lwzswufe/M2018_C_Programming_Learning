/*
7-51 求n以内最大的k个素数以及它们的和 （20 分）
本题要求计算并输出不超过n的最大的k个素数以及它们的和。

输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。

输出格式:
在一行中按下列格式输出:

素数1+素数2+…+素数k=总和值
其中素数按递减顺序输出。若n以内不够k个素数，则按实际个数输出。

输入样例1:
1000 10
输出样例1:
997+991+983+977+971+967+953+947+941+937=9664
输入样例2:
12 6
输出样例2:
11+7+5+3+2=28

*/
#include <stdio.h>


int main() 
{   
    int sum=0, primes[2048], n, k, prime_num=1, is_prime;
    scanf("%d %d", &n, &k);
    primes[0] = 2;
    for(int i = 3; i<= n; i+=2)                         // 寻找质数
    {   
        is_prime = 1;
        for(int j = 0; primes[j] * primes[j] <= i; j++)
        {
            if(i % primes[j] == 0)
            {   
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {   
            primes[prime_num] = i;
            prime_num++;
        }
    }
    int i;
    for (i=0; i<k; i++)                                 // 输出结果
    {
        sum += primes[prime_num - i -1];
        if (prime_num - i - 1 == 0 || i == k - 1)
            break;
        else
            printf("%d+", primes[prime_num - i -1]);
    }
    printf("%d=%d", primes[prime_num - i -1], sum);
    return 0;
}
