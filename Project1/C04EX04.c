#include <io.h>
#include <stdio.h>
/*
void ft_putchar(char c);

				// 10������ �ٸ��������� ���ϴ¹�.   ft_putnbr�̶� �Ȱ���. �������迭�� int�� ����ϴ³��ϴ°���. ���� �̰͵� �װ�ó��, ���ڿ� ����� �޾� ���ڷ� ����ϴ°Ű�
												// 123�� ������ �ٲٷ��� 123 / 10 , 12 / 10, 1 (������) ���ؼ� 10���� �ȳ����������� ������, �� ������ �������� ��������.
												// 1 % 10 = 1 , 12 % 10 = 2 , 120 % 10 = 0    -> �� ���ϸ� 120�� ����.
												// �׷��ٸ� 8������? ������. 123 / 8 , 15 / 8 , 1 (������) 8�� �ȳ����������� ������ ������������ �����ְ� ���帶�������ڸ� ���� �տ������ָ��
												// 1 % 8 = 1, 15 % 8 = 7, 123 % 8 = 3 -> 173�� ����.
				



int		ft_len(char* ptr)
{
	int i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

int		ft_exception(char* ptr)
{
	int i;
	int j;

	i = 0;
	if (ptr[0] == 0 || ptr[1] == 0)
		return (1);
	while (ptr[i])
	{
		if (ptr[i] == '-' || ptr[i] == '+' || ptr[i] <= 31 || ptr[i] == 127)
			return (1);
		j = i + 1;
		while (ptr[j])
		{
			if (ptr[i] == ptr[j])  	//�ּҰ��� �ְ� ������ �ڵ尡 �� ��������. str1���ּҰ��� ������Ű�鼭 j�� �ű⿡ +1�� ��Ӵ��ϱ⸸�ϸ�� ���� ptr�ּҸ� ������Ű�鼭�ߴٸ�  ptr[0] == ptr[i]�� ����.
									
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char* base)
{
	int		i;
	unsigned int		lnbr;			//����ε���Ʈ�����.
	unsigned int		len1;		// ���̽��� ���� ���������� Ȯ���ϱ� ���� ����. �굵 ����̵� �ֳ��ϸ� ������� ���������ϴ¿��궧 �����Ϸ��� �ɸ�.
	char	str[32];  	// 32���������� ��Ʈ�� 4����Ʈ�� 2������ 32ĭ�� ����ϱ⶧����. // �ΰ��� �־�ߵǼ� 33�� �����.

	len1 = ft_len(base);
	if (ft_exception(base))	// �ͼ����� ���ϰ��� 1�̸� �ٷ� �Լ� ����
		return;
	i = 0;
	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	while (lnbr != 0)
	{
		str[i++] = lnbr % len1;	// ���ڿ����ڸ� ������ ����ϴ°��̳� �ٸ� ��Ÿ���� ������ �ߴ��Ͱ�  �ٸ��� ����.  �׶��� 10���� �����Ű�
					// ������ 10�� ������ ����ε� �����°���. ���µ� �����ϰ� ����� ������. 
					// �׷��� str���ڿ��� �Ųٷ� ���� ����ִ°���.
		lnbr = lnbr / len1;
	}
	while (--i >= 0)		// �Ųٷ� ���� ���� ����� ����ϴ°�����. ���߿� base�� ���� ���ڷ� ����� ǥ���Ұ��̴�, 
					// str[i]���� �׳� ���ڰ�����ְ�(�ƽ�Ű�ڵ� ���ھƴ�!) �� ���ڰ��� ����Ͽ� ���̽��� ����ҿ� �����ϴ°���
		ft_putchar(base[(int)str[i]]);
}
















//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//

int ft_len(char* ptr)
{
	int i = 0;
	while (ptr[i])
		i++;
	return i;
}

void	ft_putnbr_base(int nbr, char* base)
{
	int base_len = ft_len(base);					//�ϴ� ���̽��� ���̸� ���ؼ� ���������� Ȯ���� �ؾ���.
	

	if (nbr >= base_len)								// ft_putnbró�� ����Լ��� �Ἥ ������ �������̰� �ϴ½����� �ϸ��. ������� ���Ƿ� ����� ���� ���̽������������.
	{
		ft_putnbr_base(nbr / base_len, base);
		//ft_putchar(base + (nbr % base_len));
		//_write(1, (base + (nbr % base_len)), 1);
		ft_putchar(base[(nbr % base_len)]);
	}
	else
		//_write(1,( base + (nbr % base_len)),1); // �̷��� ����Ʈ�� ������ �ƴϸ� �ǾƷ�ó�� base[nbr % base_len] ����� 
		//ft_putchar((base + (nbr % base_len)));  // �ȳ����� ������ ft_putchar�� char�� ������ �����ϱ� !  ��������� write�� �ٷ� ����� write�� cont * char�� ����
		ft_putchar(base[(nbr % base_len)]);

}




int main(void)
{
	ft_putnbr_base(14, "a1b2c3");
	//char base[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%c", base + 1);

	return (0);
}

*/