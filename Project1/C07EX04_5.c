/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_len(char* arr)	// ������ ����.
{
	int i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int ft_white_space_check(char c) 	// ȭ��Ʈ�����̽��� ���⼭ ó�� ���ϸ� �ڵ� 25�� �Ѿ ���⼭ ó��
{
	return (c == ' ' || (c >= 9 && c <= 13));	// ���࿡ ȭ��Ʈ�����̽����̶�� 1�� ��������.
}


int	ft_base_exception(char* base) // ������� ����ó��Ȯ���ϴ� �Լ�
{
	int i;

	if (base[0] == 0 || base[1] == 1)
		return (1);
	while (*base != 0)
	{
		if (*base == '+' || *base == '-')
			return (1);
		if (*base == ' ' || (*base >= 9 && *base <= 13))
			return (1);
		i = 1;
		while (base[i] != 0)
		{
			if (*base == base[i])
				return (1);
			i++;
		}
		base++;
	}
	return (0);
}




long ft_check_nbr(char* nbr, char* base_from, int base_len) // nbr�� ��Ʈ���̳��� ������ �ٲ���. base_from�� �������� nbr�� 10�����ιٲ۴����� int�� �־� �����÷ο쳪 ����÷ο� ó��������)
{
	int i;
	int sum;   // long?
	int sign;

	sign = 1;
	sum = 0;
	while (ft_white_space_check(*nbr))  // nbr�� ��� �ִ� ȭ��Ʈ�����̽��� �ִٸ� �ּҰ��� ����
		nbr++;
	while (*nbr == '-' || *nbr == '+') // nbr�� +-��ȣ�� �ִٸ� �װ����� sign�� ���� �����ϸ� �ּҰ��� ����.
		if (*(nbr++) == '-')
			sign *= -1;
	while (*nbr) // nbr�� ���� null�� �ɶ�����. nbr�� ���� üũ�ϸ� sum�� ��Ʈ������ 10����ȭ ���� �����ϴ� �ݺ���
	{
		i = -1;
		while (base_from[++i])  // base_from�� �����鼭 nbr�� base_from�� �´� �ε����� sum����ϴ°��� �Ѱ���.
		{
			if (*nbr == base_from[i]) // �ش��ε����� ã������ �ݺ����� ��� ������ �ȵǹǷ� break�� ���������� i ���� �ش� �ε����̹Ƿ� sum�� ��꿡 ���
				break;
		}
		if (i == base_len)  // i�� ���� base_len �� base_from�� null������ ���Ҵٸ� �Ʒ��� ���� ������ �������;��ϹǷ� �װ��϶� break;
			break;  // atoi�� -+--1234abc123�̸� -1234�� ��µȴ�. ���迡���� 0~9while �ȵ����� �Ǽ��� �κ��̴�. 123-123���� ã�� �׺κ� ��������. 
		sum = sum * base_len + (i * sign);  // 2������ 10������ �ٲܶ� �ش� �ڸ������� 2�� �������� �ϴ°Ͱ� �Ȱ��� �����̶�� �����.
		nbr++;
	}
	return ((long)sum);  // nbr���� ��������.
}

int		nbr_size(long nbr, int base_len)
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

char	*ft_change(long lnbr, int base_len, char* base) // �Ѱܹ��� long�� nbr�� ���� base_to�������� ������� ��ȯ���ִ� �Լ�.��������� ����������.
{
	char* ret;
	int size;
	long tmp;
	if (lnbr == 0)
	{
		ret = (char*)malloc(2);
		ret[0] = base[0];
		ret[1] = 0;
		return (ret);
	}
	tmp = lnbr;
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
	if (lnbr < 0)
		ret[0] = '-';
	return (ret);

}





//void ft_convert_base(char* nbr, char* base_from, char* base_to)
char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	int base_from_len;
	int base_to_len;
	long lnbr;
	//char* mall1;	// ���¸� malloc���� �Ѱ�����ؼ� ����Լ��� ����.

	base_from_len = ft_len(base_from);
	base_to_len = ft_len(base_to);
	if (ft_base_exception(base_from) || ft_base_exception(base_to))   // exception���� ������ ������쿡 1 ������ 0 �����ϹǷ� if�� ���Դٴ°� �����ִٴ¾����.
	{

	}


	if ((lnbr = ft_check_nbr(nbr, base_from, base_from_len)) < 0) // ft_check�� ���� 10������ ���� ������� -������ϰ� ����� �ٲ���.
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	//printf("lnbr : %ld \n", lnbr);
	return (ft_change(lnbr, base_to_len, base_to));  // 10������ base_to�������� ���ȭ������.  
	//return nbr;

	//���� ������� ���� �����ϴ� ������ ó�� �ϸ� �� ����. �׸��� base_exception�϶�, null���� �����ϴ� �κи� �ϸ��.
}









int main()
{
	char nbr[100] = "++---cba";
	char base_from[100] = "abc";
	char base_to[100] = "abcd";
	char *test1 = ft_convert_base(nbr, base_from, base_to);
	//int re = ft_check_nbr(nbr, base_from, 3);
	//printf("%d\n", re);
	return 0;
}
*/