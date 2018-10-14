/*
7-64 最长对称子串 （25 分）
对给定的字符串，本题要求你输出最长对称子串的长度。例如，给定Is PAT&TAP symmetric?
，最长对称子串为s PAT&TAP s，于是你应该输出11。

输入格式：
输入在一行中给出长度不超过1000的非空字符串。

输出格式：
在一行中输出最长对称子串的长度。

输入样例：
Is PAT&TAP symmetric?
输出样例：
11
*/
#include <stdio.h>

int findstr1(char *str, int pos, int N)
{                                       // ABA模式
    int n = 1;
    for (int i=1; pos-i>=0 && pos+i<N; i++)
    {
        if(str[pos-i] != str[pos+i])
            return n;
        n += 2;
    }
    return n;
}

int findstr2(char *str, int pos, int N)
{                                       // ABBA模式
    int n = 0;
    if(pos+1<N && str[pos] != str[pos+1])
        return n;
    else
        n = 2;
    for (int i=1; pos-i>=0 && pos+1+i<N; i++)
    {
        if(str[pos-i] != str[pos+1+i])
            return n;
        n += 2;
    }
    return n;
}

int main() 
{   
    int maxlen = 0, len;
    char str[1024];
    fgets(str, 1024, stdin);
    for(int i=0; i<1024; i++)
    {
        if (str[i] == '\0' || str[i] == '\n')
            break;
        len = findstr1(str, i, 1024);
        if (len > maxlen)
            maxlen = len;
        len = findstr2(str, i, 1024);
        if (len > maxlen)
            maxlen = len;
    }
    printf("%d", maxlen);
    return 0;
}
