/*
7-27 兔子繁衍问题 （15 分）
一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子
。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？

输入格式:
输入在一行中给出一个不超过10000的正整数N。

输出格式:
在一行中输出兔子总数达到N最少需要的月数。

输入样例:
30
输出样例:
9
*/
#include <stdio.h>


int main() 
{   
    int N, mounth=1, born=0, sum=1, rabbit[3]={1, 0, 0};
    scanf("%d", &N);
    //printf("%d %d %d\n", rabbit[0], rabbit[1], rabbit[2]);
    while (sum < N)
    {   
        rabbit[2] += rabbit[1];         // 兔子生长
        rabbit[1] = rabbit[0];
        rabbit[0] = rabbit[2];          // 本月出生
        sum += rabbit[2];
        mounth++;
        //printf("%d %d %d\n", rabbit[0], rabbit[1], rabbit[2]);
    }
    printf("%d", mounth);
}



