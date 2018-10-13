/*
7-49 Have Fun with Numbers （20 分）
Notice that the number 123456789 is a 9-digit number consisting exactly the
numbers from 1 to 9, with no duplication. Double it we will obtain 246913578,
which happens to be another 9-digit number consisting exactly the numbers 
from 1 to 9, only in a different permutation. Check to see the result if we 
double it again!

Now you are suppose to check if there are more numbers with this property. 
That is, double a given number with k digits, you are to tell if the resulting
number consists of only a permutation of the digits in the original number.

Input Specification:
Each input contains one test case. Each case contains one positive integer
with no more than 20 digits.

Output Specification:
For each test case, first print in a line "Yes" if doubling the input number
gives a number that consists of only a permutation of the digits in the 
original number, or "No" if not. Then in the next line, print the doubled number.

Sample Input:
1234567899
Sample Output:
Yes
2469135798

*/
#include <stdio.h>

void count (char *c_ptr, int num_count[10])
{                                       // 统计数字
    for(int i=0; i< 10; i++)
        num_count[i] = 0;
    int x;
    while (*c_ptr != '\0')
    {
        x = *c_ptr - 48;
        num_count[x]++;
        c_ptr++;
    }
}

void double_X(char *x_ptr, char *y_ptr)
{
    int y, temp=0, digit=0;             // temp 进位符号
    while (*(x_ptr+digit) != '\0')      // 记录位数
    {
        digit++;
    }
    for (int i =digit-1; i>= 0; i--)    // 从低位开始做乘法
    {
        y = (*(x_ptr + i) - 48) * 2 + temp;
        temp = y / 10;
        y = y % 10;
        *(y_ptr + i) = 48 + y;
    }
    if (temp == 0)                      // 需要进位的情况
        return;
    for (int i =digit; i > 0; i--)
    {
        *(y_ptr+i) = *(y_ptr+i - 1);
    }
    *y_ptr = 48 + temp;
}


int main() 
{   
    char X[22], Y[22];
    for(int i =0; i<22; i++)
    {
        X[i] = 0;
        Y[i] = 0;
    }
    scanf("%s", X);
    int count_1[10], count_2[10];
    double_X(X, Y);
    count(X, count_1);
    count(Y, count_2);
    for (int i=0; i< 10;i++)
    {
        if (count_1[i] != count_2[i])
        {
            printf("No\n%s", Y);
            return 0;
        }
    }
    printf("Yes\n%s", Y);
    return 0;
}
