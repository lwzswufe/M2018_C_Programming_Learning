/*
7-22 用天平找小球 （10 分）

三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。

输入格式：

输入在一行中给出3个正整数，顺序对应球A、B、C的重量。

输出格式：

在一行中输出唯一的那个不一样的球。

输入样例：

1 1 2
输出样例：

C
*/
#include <stdio.h>

int main(int argc, char **argv) 
{   
    char *BallName = "ABC";
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b)
        printf("C");
    if (a == c)
        printf("B");
    if (c == b)
        printf("A");
    return 0;
}
