/*
#include <stdio.h>

int ft_is_prime(int nb)		
{
	int i = 2;				// 1�� ������ �������Ƿ� 1�� �����ϱ����� 2���� ���

	if (nb < 2)				// 0�� 1�� �Ҽ��� �ƴϹǷ� 0�� ������.
		return 0;

	while (i * i <= nb)			// nb ���� 1���� ���ڱ��� i���� �ݺ���. nb�� �������ڱ��� �ݺ��ϸ� 7/7�� �翬�� �������� 0�̴� if�� �ɸ�.  
							// �ݺ��������� ������ i * i <= nb�ϸ� �Ǳ��ѵ� ��Ȯ�� ������ ������ ���ؼ� �߸𸣰���
	{
		if (nb % i == 0)   // i���� nb�� �������� 0�� ������ �Ҽ����ƴϹǷ� 0�� ���� 
			return 0;
		i++;
	}
	return 1;				// if���� �ѹ��� �Ȱɸ��� �������� �Ҽ��̹Ƿ� 1����     
}
int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return nb;

	return ft_find_next_prime(nb + 1);
}


int ft_is_prime(int nb)
{
	if (nb < 2)
	{
		return 0;
	}
	int i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}


	return 1;
}

int ft_find_next_prime(int nb)
{	
	int i = 2;
	while (ft_is_prime(nb) == 0)
		nb++;
	return nb;
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return nb;
	return ft_find_next_prime(nb + 1);
}



int main(void)
{
	int nb = 62;
	printf("%d\n", ft_is_prime(nb));
	printf("%d\n",ft_find_next_prime(nb));
	

	return 0; 
}
*/



