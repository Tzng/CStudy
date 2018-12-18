#include <stdio.h>
int main()
{
    int i, I, n, m, b, J, sum;
    I = 1;
    J = 1;
    sum = 0;
    printf("Input the m:");
    scanf("%d", &m);
    for (n = 1; n <= m; n++)
    {
        for (i = 1; i <= n; i++)
        {

            I = I * i;
            for (b = 1; b < i; b++)
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