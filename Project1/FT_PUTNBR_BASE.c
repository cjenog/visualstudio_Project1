/*
#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

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
    int num1 = 20;    // int�� ���� ����
    int* numPtr1;     // int�� ������ ����

    numPtr1 = &num1;  // num1�� �޸� �ּҸ� ���Ͽ� numPtr�� �Ҵ�

    int* numPtr2;     // int�� ������ ����

    numPtr2 = malloc(sizeof(int));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�

    printf("%p\n", numPtr1);    // 006BFA60: ���� num1�� �޸� �ּ� ���
                                // ��ǻ�͸���, ������ ������ �޶���
    printf("%p\n", numPtr2);     // 009659F0: ���� �Ҵ�� �޸��� �ּ� ���
                                // ��ǻ�͸���, ������ ������ �޶���
    

//    free(numPtr2);    // �������� �Ҵ��� �޸� ����
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