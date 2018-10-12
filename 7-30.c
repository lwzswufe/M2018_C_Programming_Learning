/*
7-30 念数字 （15 分）
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling
*/
#include <stdio.h>


int main() 
{   
    char sz[64] = "ling\0yi\0\0\0er\0\0\0san\0\0si\0\0\0"\
                  "wu\0\0\0liu\0\0qi\0\0\0ba\0\0\0jiu\0\0\0";
    char pron[128];
    int x, temp=10, N=0, arr[20];
    scanf("%d", &x);
    if (x < 0)
    {
        printf("fu ");
        x = -x;
    }
    if (x == 0)
    {
        printf("ling");
        return 0;
    }
    while (x > 0)
    {   
        arr[N] = x % 10;
        N++;
        x /= 10;
    }
    for(int i=N-1; i>0; i--)
    {
        printf("%s ", sz + 5 * arr[i]);
    }
    printf("%s", sz + 5 * arr[0]);
    return 0;
}