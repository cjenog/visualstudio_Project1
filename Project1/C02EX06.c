/*
int	ft_str_is_printable(char* str)  // ��°����� ���ڸ� 1 �ƴϸ� 0   0~31 , 127�� ��ºҰ��� ����.  32�� ���鹮��.  32�� 9~13������ ���鹮����.  
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