/*
char* ft_strupcase(char* str)  // 소문자를 대문자로 바꿔주는 함수.
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
*/