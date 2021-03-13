/*
#include <stdio.h>
int ft_is_prime(int nb)   // 0과 1은 소수가아님. 어떤수를 나눴을때 1과 자기자신으로만 나눠지면 소수, 1은 약수가 자기자신밖에 없어서 소수가아님 약수가 2개는 되야 소수
{						 //  소인수분해를해서 나온수가 약수
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