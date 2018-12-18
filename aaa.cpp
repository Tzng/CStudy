#include <stdio.h>
int main()
{
    int i, I, n, m, b, J, sum;
    sum = 0;
    printf("Input the m:");
    scanf("%d", &m);
    for (n = 1; n <= m; n++)
    {
        I = 0;
        for (i = 1; i <= n; i++)
        {         
            J = 1;   
            for (b = 1; b <= i; b++)
            {
                J = J * b;
            }
            I += J;
        }
        sum += I;
    }
    printf("%d", sum);
    return 0;
}