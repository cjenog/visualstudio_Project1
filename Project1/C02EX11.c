/*
#include <unistd.h>

void	ft_putchar(unsigned char s)
{
	write(1, &s, 1);
}

void	hex(unsigned char c)
{
	char	hex1[2];						// \0a���������� ǥ���ؾ��ϹǷ� ���ڰ� 2���� �ʿ���.   
	int		i;

	i = -1;
	hex1[0] = c / 16;						// ��          ex )   10���� 100��   16������ 64�̴�.   hex1[0] = 6;
	hex1[1] = c % 16;						// ������		hex[0] = 4; �� �� ���´�.
	while (++i < 2)						//�ݺ������� 10�̻��Ǽ��� �����Ǽ� ����� ����.
	{
		if (hex1[i] > 9)				//10�̻��̸� a~f�� ǥ���ؾ��ϹǷ� ������ ����.
		{	
			ft_putchar((hex1[i] - 10) + 'a');		// a~f�� 97���ͽ���.    �׸��� 10�̻��̹Ƿ� 10�� ������.   ������� 13�̸�  13 - 10 = 3  + 'a'�� �Ǵ°���. �׷��� 'd'�� ����.
		}
		else
			ft_putchar(hex1[i] + '0');		// a~f�� �ȳִ� 9������ ��쿡�� '0'�� �־ ���ڷ� ���.
	}
}

void	ft_putstr_non_printable(char* str)		// ��ºҰ����� ���ڰ� ������ \�ְ� 16������ ǥ���ϸ��. 
{
	char* charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)	//��ºҰ����� �����϶� ���� ������.
		{
			ft_putchar('\\');					//�ϴ� �齽���� ���.
			hex(*charptr);						// 16������ �ٲ㼭 ������� hex�Լ� ȣ��
		}
		else
			ft_putchar(*charptr);			//��ºҰ����� ���ڰ��ƴϸ� �׳� ���.
		charptr++;
	}
}
*/
