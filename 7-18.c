/*
7-19 计算天数 （15 分）
本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。

输入样例1:
2009/03/02
输出样例1:
61
输入样例2:
2000/03/02
输出样例2:
62
*/
#include <stdio.h>


int main() 
{   
    int wait_time;
    double distance, fee;
    scanf("%lf %d", &distance, &wait_time);
    if (distance < 3)
        fee = 10.0;                     // 起步价
    else
        fee = 4.0 + distance * 2.0;     // 10公里内
    if (distance > 10)
        fee += (distance - 10);         // 10公里以上 
    fee += (wait_time / 5) * 2.0;       // 每5分钟2元计收（不足5分钟则不收费）
    fee += 0.5;                         // 四舍五入
    printf("%d", (int)fee);
    return 0;
}

