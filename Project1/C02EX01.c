/*
char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)     // src���� ���Ҵٸ� ���� ��� �ڸ��� �η� ä����.cpy�� �ٿ��ֱⰡ �ƴ� �������. abcdefg��   12�� ������ 12cdefg�� ����. �� �η� ���������. �ٵ� �߿��Ѱ�
					  // �� �������� dest = null�� ���� �ѹ� �� �ȳ־��ִ���? strncpy�� �ִ��� src�� ���缭 ���� �ȵ����� ����� �°� ���� ���������ϱ⶧����. 
					// ������ �ְ� ������ strlcpy�� �����.
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
*/