/*
#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)	// ����Լ��� ��������� ���ǹ�����, �ʱⰪ���� 0�� �������� 0!�� 1���� ��Ÿ�������� �����.
		return 1;	// nb == 1�� return 1�� ���� ������ ������ ������ ����ѹ��� ���� ���� 1���� �����ϱ�.

	return nb * ft_recursive_factorial(nb - 1);
}
int main()
{
	int nb = 1;
	printf("%d\n", ft_recursive_factorial(nb));
	return 0;
}
*/