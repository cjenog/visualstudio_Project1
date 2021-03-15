/*
#include <stdio.h>

int ft_atoi(char* str)
{
	int i;
	int sum;
	int sign;

	sign = 1;
	i = 0;
	sum = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	return sum * sign;
}


int main(void)
{
	char str[30] = "     \t\r---2147483649";
	printf("%d \n",ft_atoi(str));
	return 0;
}

*/