/*
7-6 厘米换算英尺英寸 （15 分）
如果已知英制长度的英尺foot和英寸inch的值，那么对应的米是(foot+inch/12)×0.3048。
现在，如果用户输入的是厘米数，那么对应英制长度的英尺和英寸是多少呢？别忘了1英尺等于12英寸。

输入格式：
输入在一行中给出1个正整数，单位是厘米。

输出格式：
在一行中输出这个厘米数对应英制长度的英尺和英寸的整数值，中间用空格分开。

输入样例：
170
输出样例：
5 6
*/
#include <stdio.h>

int main() 
{   
    int foot, inch, height;
    scanf("%d", &height);                       // 格式化读取输入字符
    foot = height / 30.48;
    inch =  (height - foot * 30.48) / 2.54;
    printf("%d %d", foot, inch);
    return 0;
}
