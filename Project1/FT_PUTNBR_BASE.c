/*
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int* malloctest()
{
    int* numPtr3;
    numPtr3 = malloc(sizeof(int) * 10);
    int i = 0;
    while (i < 10)
    {
        numPtr3[i] = i;
        i++;
    }


    return numPtr3;
}

int main()
{
    int num1 = 20;    // int형 변수 선언
    int* numPtr1;     // int형 포인터 선언

    numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당

    int* numPtr2;     // int형 포인터 선언

    numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

    printf("%p\n", numPtr1);    // 006BFA60: 변수 num1의 메모리 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐
    printf("%p\n", numPtr2);     // 009659F0: 새로 할당된 메모리의 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐
    

//    free(numPtr2);    // 동적으로 할당한 메모리 해제
  //  numPtr2 = NULL;
  //  printf("%p\n", numPtr2);
    int* numPtr4 = malloctest();
    printf("numPtr4 : %p\n", numPtr4);
    int i = 0;
    while (i < 10)
    {
        printf("%d, ", numPtr4[i]);
        i++;
    }
    printf("\n");
    free(numPtr4);
    printf("numPtr4 : %p\n", numPtr4);
    *numPtr4 = 365;
    printf("%d", numPtr4[1]);

    return 0;
}
*/