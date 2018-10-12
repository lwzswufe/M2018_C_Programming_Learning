/*
7-40 到底是不是太胖了 （10 分）
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。
真实体重与标准体重误差在10%以内都是完美身材（即 | 真实体重 − 标准体重 | < 标准
体重×10%）。已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们
是否太胖或太瘦了。

输入格式：
输入第一行给出一个正整数N（≤ 20）。随后N行，每行给出两个整数，分别是一个人的
身高H（120 < H < 200；单位：厘米）和真实体重W（50 < W ≤ 300；单位：市斤）
，其间以空格分隔。

输出格式：
为每个人输出一行结论：如果是完美身材，输出You are wan mei!；如果太胖了，
输出You are tai pang le!；否则输出You are tai shou le!。

输入样例：
3
169 136
150 81
178 155
输出样例：
You are wan mei!
You are tai shou le!
You are tai pang le!
*/
#include <stdio.h>


int main() 
{   
    int N, height[32], weight[32];
    double std_weight;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d %d", height+i, weight+i);
    for(int i=0; i<N; i++)
    {   
        std_weight = (height[i] - 100) * 1.8;
        if (weight[i] * 1.0 / std_weight >= 1.1)
            printf("You are tai pang le!\n");
        else
        {
            if (weight[i] * 1.0 / std_weight <= 0.9)
                printf("You are tai shou le!\n");
            else
                printf("You are wan mei!\n");
        }
    }
    return 0;
}
