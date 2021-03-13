/*
#include <stdio.h>

int	ft_len(char* ptr)
{
	int i;

	i = 0;
	while (ptr[i] != 0)
		i++;
	return (i);
}

int ft_calc(char* str, char* base)		 //원래는 여기서 가져온 str이 첫번째가아닐확률이 있으므로 특정변수를 더해서 보내줘야함. 혹은 ft_atoi_base에서 예외계산할때
{										//반복문돌리는걸 str이 가르키는 주소값을 증가시키는 방법으로 했다면 그대로 보내도됨. 그게아니라 str[i]식으로하면 i값도 넘겨야함
	int i = 0;
	
	while (base[i] != 0)
	{
		if (base[i] == *str) //원래는 str은  다른 값이란걸 잊지 말것. str주소값을 증가시키거나 str[i]로했다면 i,j두개를써서 base와str을 각각증가시켜야함
			return (i);
		i++;
	}
	return (0);
}


int	ft_atoi_base(char* str, char* base)
{
	int len = ft_len(base);
	int atoi = 0;

	while (ft_calc(str, base))
	{
		atoi = atoi * len;
		atoi = atoi + ft_calc(str, base);
		str++;
	}
	return (atoi);

}

int main(void)
{
	printf("%d\n", ft_atoi_base("dfe", "abcdefgh"));   // 8진수로 354   10진수로 236

	return (0);
}

*/