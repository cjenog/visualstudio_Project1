/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void    ft_print(int* arr, int n)
{
    int i;
    int max;

    i = n - 1;
    max = 1;

    while (i)
    {
        if (arr[i - 1] >= arr[i])
            max = -1;
        i--;
    }
    if (max == -1)
        return;

    while (i < n)
    {
        //ft_putchar(arr[i] + '0');
        printf("%d", arr[i]);
        i++;
    }
    printf(", ");
}

void    ft_print_combn(int n)
{
    int i;
    int arr[10];

    if (n <= 0 || n >= 10)
    {
        printf("잘못된 값이 입력되었습니다.\n");
        return;
    }
    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    i = 0;
    while (arr[i] <= 10 - n)
    {
        ft_print(arr, n);
        arr[n - 1]++;
            i = n;
//        while (i && n > 1)
        while(i)
        {
            i--;
            if (arr[i] > 9)
            {
                arr[i - 1]++;
//                arr[i] = arr[i - 1];
                arr[i] = 0;
            }
        }
    }
}
int main()
{
    int i = 0;
    //scanf("%d", &i);

    ft_print_combn(2);
    printf("\n");
  
    return 0;
}

*/