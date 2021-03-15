/*
#include <stdlib.h>
#include <stdio.h>

int ft_sub(char c, char* base)
{
	int i = 0;
	while (base[i])
	{
		if (c == base[i])
			return i;
		i++;
	}
	return -1;
}

int main()
{
	//printf("%s\n", ft_convert_base("-2147483649", "0123456789", "0123456789"));
	char* base_from = "0123456789";
	char* base_to = "0123456789";
	char * nbr = "2147483649";
	char* result  =  malloc(sizeof(char) * 10);

	int i = 0;
	int j = 0;

	while (nbr[i])
	{
		if(ft_sub(nbr[i], base_from) == -1)
			return 0;
			j = ft_sub(nbr[i], base_from);
			result[i] = base_to[j];
		i++;
	}
	result[i] = 0;
	printf("%s\n", result);
	free(result);
	result = NULL;
	return 0;
}




#include <stdio.h>

int main(void)
{
	int i = -2147483648;
	//i = i + 9;
	i = i - 1;
	printf("%d", i);
	return 0;
}
*/