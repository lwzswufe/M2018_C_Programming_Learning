/*
6-3 判断回文字符串 （20 分）
本题要求编写函数，判断给定的一串字符是否为“回文”。所谓“回文”是指顺读和倒读都
一样的字符串。如“XYZYX”和“xyzzyx”都是回文。

函数接口定义：
bool palindrome( char *s );
函数palindrome判断输入字符串char *s是否为回文。若是则返回true，否则返回false。

裁判测试程序样例：
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

// 你的代码将被嵌在这里 //
输入样例1：
thisistrueurtsisiht
输出样例1：
Yes
thisistrueurtsisiht
输入样例2：
thisisnottrue
输出样例2：
No
thisisnottrue
*/
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s )
{   
    int len=0, right, left;
    while(*(s + len) != '\0')
    {
        len++;
    }
    if (len == 1)
        return true;
    if (len % 2 == 0)
    {
        right = len / 2;
        left = right - 1;
    }
    else
    {
        right = len / 2 + 1;
        left = len / 2 - 1;
    }
    while (right >= 0)
    {
        if(*(s + right) != *(s + left))
            return false;
        right--;
        left++;
    }
    return true;
}
