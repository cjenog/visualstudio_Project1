/*
#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int sum = 1;
	if (nb < 0)
		return 0;
	if (nb == 0)		// 0���丮���� 1�̴�. ������ �� �� �׷�����.  
						//sum�� �⺻������ 1�� �������Ƿ� nb == 0 �̶�� ���ǹ��� ��� ���ϰ� 1�� ��ȯ �� �� �ִ�.
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