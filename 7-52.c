/*
7-52 数组元素循环右移问题 （20 分）
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移
M（≥0）个位置，即将A中的数据由（A0 A1 ... AN−1）变换为（AN−M AN−1 A0 A1⋯AN−M−1
)（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，
要如何设计移动的方法？

输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，
之间用空格分隔。

输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例:
6 2
1 2 3 4 5 6
输出样例:
5 6 1 2 3 4

*/
#include <stdio.h>

void move(int N, int M, int *arr, int st, int loop_n)
{                                       // 位移操作
    int temp0, temp1, pos0, pos1;
    pos0 = st;
    temp0 = arr[pos0];
    for(int i = 0; i<= loop_n; i++)
    {   
        pos1 = (pos0 + M) % N;
        temp1 = *(arr + pos1);
        *(arr + pos1) = temp0;
        pos0 = pos1;
        temp0 = temp1;
    }
}

int main() 
{   
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int i = 0; i< N; i++)
        scanf("%d", arr + i);
    if (N % 2 > 0 || M % 2 > 0)
    {   
        move(N, M, arr, 0, N);
    }
    else                            // 长度偶数个 位移偶数需要将所有数据分为奇数组偶数组分别移动
    {
        move(N, M, arr, 0, N/2);
        move(N, M, arr, 1, N/2);
    }
    printf("%d", arr[0]);
    for (int i = 1; i< N; i++)
        printf(" %d", arr[i]);
    return 0;
}