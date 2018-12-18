#include <stdio.h>
int main()
{
    int I, m, J, sum;    
    sum = 0;
    printf("Input the m:");
    scanf("%d", &m);
    for (int n = 1; n <= m; n++)
    {
        I = 0;
        // 计算阶乘之和 1!+2!
        for (int i = 1; i <= n; i++)
        {
            // 初始化用于求和的J
            J = 1;
            // 计算阶乘 2! 之类的
            for (int b = 1; b <= i; b++)
            {
                J = J * b;
            }
            // 将求出来的 2! 加上去 1!+2!
            I += J;
        }
        sum += I;
    }
    printf("%d", sum);
    return 0;
}