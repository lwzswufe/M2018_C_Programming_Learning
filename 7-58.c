/*
7-58 求整数序列中出现次数最多的数 （15 分）
本题要求统计一个整型序列中出现次数最多的整数及其出现次数。

输入格式：
输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。

输出格式：
在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。

输入样例：
10 3 2 -1 5 3 4 3 0 3 2
输出样例：
3 4


*/
#include <stdio.h>

int find(int *numbers, int num, int x)
{
    for(int i=0; i<num; i++)
    {
        if (numbers[i] == x)
            return i;
    }
    return -1;
}

int main() 
{   
    int N, numbers[1024], times[1024], x, num=0, pos, max_times, max_arg;
    scanf("%d", &N);
    for (int i = 0; i<N; i++)               
    {
        scanf("%d", &x);
        pos = find(numbers, num, x);
        if (pos < 0)
        {   
            numbers[num] = x;
            times[num] = 1;
            num++;
        }
        else
            times[pos]++;
    }
    max_times = 0;
    max_arg = -1;
    for (int i = 0; i<num; i++)               
    {   
        if (times[i] > max_times)
        {
            max_times = times[i];
            max_arg = i;
        }
    }
    printf("%d %d", numbers[max_arg], max_times);
    return 0;
}
