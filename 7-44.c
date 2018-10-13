/*
7-44 黑洞数 （20 分）
黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。

任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后的最大数减去重排后的最小数。（6174为四位黑洞数。）

例如，对三位数207：

第1次重排求差得：720 - 27 ＝ 693；
第2次重排求差得：963 - 369 ＝ 594；
第3次重排求差得：954 - 459 ＝ 495；
以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。

任意输入一个三位数，编程给出重排求差的过程。

输入格式：
输入在一行中给出一个三位数。

输出格式：
按照以下格式输出重排求差的过程：

序号: 数字重排后的最大数 - 重排后的最小数 = 差值
序号从1开始，直到495出现在等号右边为止。

输入样例：
123
输出样例：
1: 321 - 123 = 198
2: 981 - 189 = 792
3: 972 - 279 = 693
4: 963 - 369 = 594
5: 954 - 459 = 495


*/
#include <stdio.h>


int main() 
{   
    int x, x_, x1, x2, x3, y, i=0, temp;
    scanf("%d", &x);
    do
    {   
        i++;
        x1 = x / 100;
        x2 = x / 10 % 10;
        x3 = x % 10;
        
        if (x1 < x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        
        if (x2 < x3)
        {
            temp = x2;
            x2 = x3;
            x3 = temp;
        }
        
        if (x1 < x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        
        x  = x1 * 100 + x2 * 10 + x3;
        x_ = x3 * 100 + x2 * 10 + x1;
        y = x - x_;
        printf("%d: %d - %d = %d\n", i, x, x_, y);

        x = y;
        if (i > 100)
            break;
    }
    while (y != 495);
    return 0;
}
