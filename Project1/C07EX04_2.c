/*
#include <stdio.h>
#include <stdlib.h>

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
int		ft_is_whitespace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int		is_valid(char* base, int* len)
{
	int		chk[256];
	int		i;
	char	c;

	i = 0;	while (i < 256)
		chk[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (chk[(int)c] || c == '+' || c == '-' || ft_is_whitespace(c))
			return (0);
		chk[(int)c] = 1;
		++* len;
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int		nbr_size(long long nbr, int base_len)
{
	int ret;

	if (!nbr)
		return (1);
	ret = 0;
	if (nbr < 0)
		++ret;
	while (nbr)
	{
		nbr /= base_len;
		++ret;
	}
	return (ret);
}

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
int		atoi_b(char* str, char* base, int base_len)
{
	int ret;
	int sign;
	int idx;

	ret = 0;
	sign = 1;
	while (ft_is_whitespace(*str))
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		idx = -1;
		while (++idx < base_len)
		{
			if (*str == base[idx])
				break;
		}
		if (idx == base_len)
			break;
		ret = ret * base_len + (sign * idx);
		++str;
	}
	return (ret);
}

char* putnbr_b(int nbr, char* base, int base_len)
{
	long long	tmp;
	char* ret;
	int			size;

	if (nbr == 0)
	{
		ret = (char*)malloc(2);
		ret[0] = base[0];
		ret[1] = 0;
		return (ret);
	}
	tmp = nbr;
	size = nbr_size(tmp, base_len);
	ret = (char*)malloc(size + 1);
	ret[size] = 0;
	if (tmp < 0)
		tmp *= -1;
	while (tmp)
	{
		ret[--size] = base[tmp % base_len];
		tmp /= base_len;
	}
	if (nbr < 0)
		ret[0] = '-';
	return (ret);
}

char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	int len_f;
	int len_t;

	if (!is_valid(base_from, &len_f) || !is_valid(base_to, &len_t))
		return (0);
	return (putnbr_b(atoi_b(nbr, base_from, len_f), base_to, len_t));
}

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
int		main(void)
{
	printf("%s\n", ft_convert_base("cba", "abc", "defg"));
	return 0;
}
//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
*/