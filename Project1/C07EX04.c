/*
#include <stdio.h>
#include <stdlib.h>
//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
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

void	strev(char* str, int offset_of_center)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i + offset_of_center];
		str[i + offset_of_center] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

void	ft_encodenbr_base(int nbr, char* base, char* nb_dest)
{
	unsigned int	lenbase;
	unsigned int	nbr_unsigned;
	int				i;

	i = 0;
	if (nbr < 0)
	{
		nb_dest[i++] = '-';
		nbr_unsigned = (unsigned int)(-1 * nbr);
	}
	else
		nbr_unsigned = (unsigned int)nbr;
	lenbase = ft_strlen(base);
	if (nbr_unsigned == 0)
		nb_dest[i++] = *(base);
	while (nbr_unsigned > 0)
	{
		nb_dest[i++] = *(base + (nbr_unsigned % lenbase));
		nbr_unsigned /= lenbase;
	}
	nb_dest[i] = 0;
	(nbr < 0) ? strev(nb_dest, 1) : strev(nb_dest, 0);
}
//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
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

char* is_in_base(char* base, char* to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char* str, char* base)
{
	unsigned int	nombre;
	int				signe;
	char* charptr;

	nombre = 0;
	signe = 1;
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
		nombre *= ft_strlen(base);
		nombre += (unsigned int)(is_in_base(base, charptr) - base);
		charptr++;
	}
	return (int)(nombre * signe);
}

char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	int		nb_int;
	char* nb_converti;

	if (!(check_error_in_base(base_from) && check_error_in_base(base_to)))
		return (0);
	nb_converti = malloc(34);
	nb_int = ft_atoi_base(nbr, base_from);
	ft_encodenbr_base(nb_int, base_to, nb_converti);
	return (nb_converti);
}

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
int		main(void)
{
	printf("%s\n", ft_convert_base("-2147483649", "0123456789", "0123456789"));
	return 0;
}
*/