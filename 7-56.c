#include <stdio.h>
#define INT_MIN 0x80000000
#define INT_MAX 0x7FFFFFFF

int main() 
{   
    int N, x;
    scanf("%d", &N);
    int mat[N][N], row_max[N], col_min[N];
    for (int i = 0; i<N; i++)               // 初始化列最小值 行最大值
    {   
        col_min[i] = INT_MAX;
        row_max[i] = INT_MIN;
    }
    for (int i = 0; i<N; i++)               // 读取数据并缓存 列最小值 行最大值
    {   
        for(int j=0; j<N; j++)
        {
            scanf("%d", &x);
            if (x > row_max[i])
                row_max[i] = x;
            if (x < col_min[j])
                col_min[j] = x;
            mat[i][j] = x;
        }
    }
    for (int i = 0; i<N; i++)               // 寻找鞍点
    {   
        for(int j=0; j<N; j++)
        {
            if (mat[i][j] == row_max[i] && mat[i][j] == col_min[j])
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("NONE");
    return 0;
}