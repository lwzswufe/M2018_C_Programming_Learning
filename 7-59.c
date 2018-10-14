/*
7-59 字符串逆序 （15 分）
输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。

输入格式：
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

输出格式：
在一行中输出逆序后的字符串。

输入样例：
Hello World!
输出样例：
!dlroW olleH


*/
#include <stdio.h>

int main() 
{   
    char str[96];
    int N = 0;
    //scanf("%s\n", str);
    fgets (str , 96 , stdin);               // 读取含空格的字符串
    for (int i = 0; i<96; i++)               
    {
        if (str[i] == '\0' || str[i] == '\n')
            break;
        N++;
    }

    for (int i=N-1; i>=0; i--)               
    {   
        printf("%c", str[i]);
    }
    return 0;
}
