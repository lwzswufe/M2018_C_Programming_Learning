/*
7-60 删除重复字符 （20 分）
本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。

输入格式：
输入是一个以回车结束的非空字符串（少于80个字符）。

输出格式：
输出去重排序后的结果字符串。

输入样例：
ad2f3adjfeainzzzv
输出样例：
23adefijnvz


*/
#include <stdio.h>

int main() 
{   
    char str[96];
    int abc[256];
    int M = 1, is_repeat;
    for (int i = 0; i<256; i++)
        abc[i] = 0;
    //scanf("%s\n", str);
    fgets (str , 96 , stdin);               // 读取含空格的字符串
    for (int i = 0; i<96; i++)               
    {
        if (str[i] == '\0' || str[i] == '\n')
            break;
        abc[str[i]] = 1;
    }
    for (int i = 0; i<256; i++)
    {   
        if (abc[i] > 0)
            printf("%c", i);
    }
    return 0;
}
