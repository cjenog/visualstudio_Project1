/*
#include <stdio.h>

int ft_is_prime(int nb)		
{
	int i = 2;				// 1은 무조건 나눠지므로 1을 제외하기위해 2부터 계산

	if (nb < 2)				// 0과 1은 소수가 아니므로 0을 리턴함.
		return 0;

	while (i * i <= nb)			// nb 보다 1작은 숫자까지 i값을 반복함. nb랑 같은숫자까지 반복하면 7/7은 당연히 나머지가 0이니 if에 걸림.  
							// 반복덜돌리고 싶으면 i * i <= nb하면 되긴한데 정확히 왜인지 수학을 못해서 잘모르겠음
	{
		if (nb % i == 0)   // i값과 nb를 나머지가 0이 나오면 소수가아니므로 0을 리턴 
			return 0;
		i++;
	}
	return 1;				// if문에 한번도 안걸리고 나왔으니 소수이므로 1리턴     
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



