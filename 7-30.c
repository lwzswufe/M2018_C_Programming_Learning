#include <stdio.h>


int main() 
{   
    char sz[64] = "ling\0yi\0\0\0er\0\0\0san\0\0si\0\0\0"\
                  "wu\0\0\0liu\0\0qi\0\0\0ba\0\0\0jiu\0\0\0";
    char pron[128];
    int x, temp=10, N=0, arr[20];
    scanf("%d", &x);
    if (x < 0)
    {
        printf("fu ");
        x = -x;
    }
    if (x == 0)
    {
        printf("ling");
        return 0;
    }
    while (x > 0)
    {   
        arr[N] = x % 10;
        N++;
        x /= 10;
    }
    for(int i=N-1; i>0; i--)
    {
        printf("%s ", sz + 5 * arr[i]);
    }
    printf("%s", sz + 5 * arr[0]);
    return 0;
}