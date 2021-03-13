/*
#include <stdio.h>

int main()
{
    int num1 = 20;
    int* numPtr1;
    int** numPtr2;
    int*** numPtr3;
    
    numPtr1 = &num1;
    numPtr2 = &numPtr1;
    numPtr3 = &numPtr2;

    printf("num1의 주소 : %p\n", &num1);
    printf("numPtr1의 주소 : %p\n", &numPtr1);
    printf("numPtr2의 주소 : %p\n", &numPtr2);
    printf("numPtr3의 주소 : %p\n", &numPtr3);
    printf("------------------\n");

    printf("numPtr3의 값 : %p\n", numPtr3);
    printf("*numPtr3의 값 : %p\n", *numPtr3);
    printf("**numPtr3의 값 : %p\n", **numPtr3);
    printf("***numPtr3의 값 : %d\n", ***numPtr3);
    printf("------------------\n");

    return 0;
}
*/