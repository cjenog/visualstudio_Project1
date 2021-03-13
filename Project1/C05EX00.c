/*
#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int sum = 1;
	if (nb < 0)
		return 0;
	if (nb == 0)		// 0팩토리얼은 1이다. 이유는 모름 걍 그렇다함.  
						//sum에 기본값으로 1이 들어가있으므로 nb == 0 이라는 조건문이 없어도 리턴값 1은 반환 할 수 있다.
		return 1;
	while (nb)
	{
		sum *= nb;
		nb--;
	}
	return sum;
}


int main()
{
	int nb = 21;
	printf("%d\n", ft_iterative_factorial(nb));

	return 0;
}
*/