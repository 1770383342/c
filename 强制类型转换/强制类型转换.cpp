#include <stdio.h>

int main(void)
{
    int i;
    float sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + 1.0 / i;    //推荐使用  1.0 / i 是浮点型
    }
    printf("%f", sum);

    return 0;
}

//#include <stdio.h>

//int main(void)
//{
//    int i;
//    float sum = 0;
//    for ( i = 1; i <= 100; i++)
//    {
//        sum = sum + 1 / (float)(i); //强制类型转换    【（类型）（变量）】    不推荐使用
//    }
//    printf("%f", sum);
//
//    return 0;
//}