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
		ft_putchar(unb % 10 + '0');  // �̋����� ft_putnbr(und % 10)���� �ؼ� �� ��͸� �ߴµ�, �׷� �ʿ䰡������. �׳� ������ ���ϸ��.
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