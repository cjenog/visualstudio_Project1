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
	printf("%d\n", ft_atoi_base(" ---+-+opyevni??", "poneyvif"));  // str을 먼저 숫자로 바꿀 수 없다. 무조건 기수에 대입하는게 먼저다.
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
	while (base[i])				//  베이스가 널까지 돌림.
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);				//널까지 돌렸는데도 없으면 0을 반환, while문조건안에 함수를 적으면 와일문 벗어나느거고 그냥 와일문안에 적으면 결과값이 0이면 if로 브레이크로 빠져나가게해야함.
							//안그런다면    src = "abcd!@#%$ "  base ="abcdefg"인데, abcd까지만 확인안하고 뒤에까지 다보고 값도 출력하고있음.
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
			nombre *= ft_strlen(base);   // nombre에 8진법이면 *8을하는거임   
			nombre += (unsigned int)(is_in_base(base, charptr) - base);  // is_in_base에서 가져온 base + ? 주소값에서 base주소값을 빼는거임. 주소값이 2증가된상태로 왔으면 2가나옴.
																		//근데 이렇게 할 필요없이 리턴을 그냥 is_in_base에서 base[i]에서 쓴 i를 리턴하면 그냥 i로 바로 사용가능함.
			charptr++;
		}
	}
	return (int)(nombre * signe);
}
*/