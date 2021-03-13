/*
#include <stdio.h>

int ft_iterative_power(int nb, int power)	//0의 0제곱은 1이다  하지만 0의 1제곱이나 2제곱은 0이니 주의! 그리고 0팩토리얼도 1이다.  
{
	int result = 1; // 곱하기를 할 것이므로 1을 사용.

	if (power < 0)
		return 0;
	if (power == 0) // 2의 0제곱은 1이고 , 0의 0제곱도 1이니까 그걸 표현하기위해 사용.   
		return 1;

	while (power)
	{
		result *= nb;
		power--;
	}
	return result;
}

int main()
{
	int nb = 0;
	int power = 1;
	printf("%d\n", ft_iterative_power(nb, power));
	return 0;
}

*/