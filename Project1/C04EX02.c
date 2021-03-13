/*
void ft_putchar(char c);

void ft_putnbr(int nb)
{
	unsigned int unb;

	unb = nb;

	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	

	if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		ft_putchar(unb % 10 + '0');  // 이떄까지 ft_putnbr(und % 10)으로 해서 또 재귀를 했는데, 그럴 필요가없었다. 그냥 나머지 구하면됨.
	}
	else
		ft_putchar(unb + '0');
	
}

int main()
{
	int nb = 123;
	ft_putnbr(nb);
	return 0;
}
*/