/*
#include <stdio.h>
int ft_is_prime(int nb)   // 0�� 1�� �Ҽ����ƴ�. ����� �������� 1�� �ڱ��ڽ����θ� �������� �Ҽ�, 1�� ����� �ڱ��ڽŹۿ� ��� �Ҽ����ƴ� ����� 2���� �Ǿ� �Ҽ�
{						 //  ���μ����ظ��ؼ� ���¼��� ���
	if (nb <= 1)
		return 0;
		
	int i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
	
}

int main()
{
	int nb = 7;
	printf("%d\n", ft_is_prime(nb));
	return 0;
}


int ft_is_prime(nb)
{
	int i = 2;
	if (nb < 2)
		return 0;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;

}
*/