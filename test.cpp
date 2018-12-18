#include <stdio.h>
#include <stdlib.h>

// 定义函数，求阶乘
int factorialNum(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

// 累加 1!+2!+3!...
int accumulationNum(int num){
    // 定义结果
    int factorial, result=0;
    for(int i = 1; i <= num; i ++){
        // 计算阶乘
        factorial = factorialNum(i);
        //累加。
        result+=factorial;
    }
    return result;
}

int main()
{
    int i, I, n, m, J, sum, test;
    sum = 0;
    I = 1;
    J = 1;
    printf("Input the m:");
    scanf("%d", &m);
    for (n = 1; n <= m; n++){
        // 调用阶乘累加计算
        test = accumulationNum(n);
        sum += test;
    }    
    printf("%d", sum);
    system("pause");
    return 0;
}