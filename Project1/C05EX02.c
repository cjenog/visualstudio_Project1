/*
#include <stdio.h>

int ft_iterative_power(int nb, int power)	//0�� 0������ 1�̴�  ������ 0�� 1�����̳� 2������ 0�̴� ����! �׸��� 0���丮�� 1�̴�.  
{
	int result = 1; // ���ϱ⸦ �� ���̹Ƿ� 1�� ���.

	if (power < 0)
		return 0;
	if (power == 0) // 2�� 0������ 1�̰� , 0�� 0������ 1�̴ϱ� �װ� ǥ���ϱ����� ���.   
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