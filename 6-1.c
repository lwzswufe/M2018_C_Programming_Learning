/*
6-1 使用函数求素数和 （20 分）
本题要求实现一个判断素数的简单函数、以及利用该函数计算给定区间内素数和的函数。

素数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。

函数接口定义：
int prime( int p );
int PrimeSum( int m, int n );
其中函数prime当用户传入参数p为素数时返回1，否则返回0；函数PrimeSum返回区间
[m, n]内所有素数的和。题目保证用户传入的参数m≤n。

裁判测试程序样例：
#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

// 你的代码将被嵌在这里 //
输入样例：
-1 10
输出样例：
Sum of ( 2 3 5 7 ) = 17
*/
#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p)
{   
    if (p < 2)
        return 0;
    for(int i=2; i*i <= p; i++)
    {
        if(p % i == 0)
            return 0;
    }
    return 1;
}

int PrimeSum( int m, int n )
{
    int primes[10000], prime_num=1, is_prime, sum=0;
    primes[0] = 2;
    for(int i=3; i<=n; i++) 
    {   
        is_prime = 1;
        if (i <= 2)
            continue;
        for (int p=0;p<prime_num;p++)
        {
            if(i % primes[p] == 0)
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
    for(int i=0; i<prime_num; i++) 
    {
        if (primes[i] < m)
            continue;
        if (primes[i] > n)
            break;
        sum += primes[i];
    }
    return sum;
}
