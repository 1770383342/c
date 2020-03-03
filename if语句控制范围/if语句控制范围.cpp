//#include <stdio.h>
//
//int main(void)
//{
//    if (0)
//        printf("A");
//    printf("B");
//
//    return 0;
//}

//if语句无大括号只执行之后一句，想控制多个需要加大括号

#include <stdio.h>

int main(void)
{
    if (0)
    {
        printf("A");
        printf("B");
    }
    printf("C");

    return 0;
}