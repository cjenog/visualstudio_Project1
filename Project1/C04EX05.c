/*
#include <stdio.h>

void ft_putchar(char c);


int exception(char nbr, char* base)
{
	int i = 0;
	int j;
	int sign = 1;
	
	if (base[0] == 0 || base[1] == 0)
		return 1;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == 32 || (base >= 9 && base <= 13))
			return 1;
		j = 1;
		while (base[j])
		{
			if (*base == base[j])
				return 1;
			j++;
		}
		base++;
	}

	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13 ))
	{
		i++;
	}
	
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
}


int ft_atoi_base(char* str, char* base)
{
	if (exception(str,base))
		return 0;
	str[0] - '0' / base_len;

}

int main(void)
{
	char arr[10] = { 0, };

	printf("%s", arr);
	printf("%d\n", ft_atoi_base(" ---+-+opyevni??", "poneyvif"));  // str�� ���� ���ڷ� �ٲ� �� ����. ������ ����� �����ϴ°� ������.
	return 0;
}



int		check_error_in_base(char* base)
{
	char* checkbase;
	int		i_check;

	checkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*checkbase)
	{
		if (*checkbase == '+' || *checkbase == '-'
			|| *checkbase == ' ' || *checkbase <= 31)
			return (0);
		i_check = 1;
		while (*(checkbase + i_check))
		{
			if (*(checkbase + i_check) == *checkbase)
				return (0);
			i_check++;
		}
		checkbase++;
	}
	return (1);
}

int		ft_strlen(char* str)
{
	char* charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

char* is_in_base(char* base, char* to_find)
{
	int i;

	i = 0;
	while (base[i])				//  ���̽��� �α��� ����.
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);				//�α��� ���ȴµ��� ������ 0�� ��ȯ, while�����Ǿȿ� �Լ��� ������ ���Ϲ� ������Ű� �׳� ���Ϲ��ȿ� ������ ������� 0�̸� if�� �극��ũ�� �����������ؾ���.
							//�ȱ׷��ٸ�    src = "abcd!@#%$ "  base ="abcdefg"�ε�, abcd������ Ȯ�ξ��ϰ� �ڿ����� �ٺ��� ���� ����ϰ�����.
}

int		ft_atoi_base(char* str, char* base)
{
	unsigned int	nombre;
	int				signe;
	char* charptr;

	nombre = 0;
	signe = 1;
	if (check_error_in_base(base))
	{
		charptr = str;
		while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
			charptr++;
		while (*charptr == '-' || *charptr == '+')
		{
			if (*charptr == '-')
				signe *= -1;
			charptr++;
		}
		while (is_in_base(base, charptr))
		{
			nombre *= ft_strlen(base);   // nombre�� 8�����̸� *8���ϴ°���   
			nombre += (unsigned int)(is_in_base(base, charptr) - base);  // is_in_base���� ������ base + ? �ּҰ����� base�ּҰ��� ���°���. �ּҰ��� 2�����Ȼ��·� ������ 2������.
																		//�ٵ� �̷��� �� �ʿ���� ������ �׳� is_in_base���� base[i]���� �� i�� �����ϸ� �׳� i�� �ٷ� ��밡����.
			charptr++;
		}
	}
	return (int)(nombre * signe);
}
*/