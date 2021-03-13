/*
int	ft_str_is_printable(char* str)  // 출력가능한 문자면 1 아니면 0   0~31 , 127은 출력불가능 문자.  32는 공백문자.  32와 9~13까지는 공백문자임.  
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
*/