
#include <stdio.h>
#include <stdlib.h>


int ft_len(char* arr)
{
	int i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int ispace_check()
{
	return 1;
}

int ft_check_nbr(char* nbr, char* base_from, int base_len)
{
	int i;
	int sum;   // long?
	int sign;

	sign = 1;
	sum = 0;
	//while (ispace_cehck(*(nbr++)));
	while (*nbr == '-' || *nbr == '+')
		if (*(nbr++) == '-')
			sign *= -1;
	while (*nbr)
	{
		i = -1;
		while (base_from[++i])
		{
			if (*nbr == base_from[i])
				break;
		}
		if (i == base_len)
			break;  // ? �� �߸������� �׳� return 0���� �ϴ°� ����������? 123&#���� 123�� ����ϴ°͵� �̻��ѵ�
		sum = sum * base_len + (i * sign);
		nbr++;
	}
	return (sum);
}


char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	return nbr;
}

int main()
{
	char nbr[100] = "-++-cba";
	char base_from[100] = "abc";
	char base_to[100] = "def";
	//ft_conver_base(nbr, base_from, base_to);
	int re = ft_check_nbr(nbr, base_from, 3);
	printf("%d\n", re);
	return 0;
}
