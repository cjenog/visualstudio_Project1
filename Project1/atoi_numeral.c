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

int ft_calc(char* str, char* base)		 //������ ���⼭ ������ str�� ù��°���ƴ�Ȯ���� �����Ƿ� Ư�������� ���ؼ� ���������. Ȥ�� ft_atoi_base���� ���ܰ���Ҷ�
{										//�ݺ��������°� str�� ����Ű�� �ּҰ��� ������Ű�� ������� �ߴٸ� �״�� ��������. �װԾƴ϶� str[i]�������ϸ� i���� �Ѱܾ���
	int i = 0;
	
	while (base[i] != 0)
	{
		if (base[i] == *str) //������ str��  �ٸ� ���̶��� ���� ����. str�ּҰ��� ������Ű�ų� str[i]���ߴٸ� i,j�ΰ����Ἥ base��str�� �����������Ѿ���
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
	printf("%d\n", ft_atoi_base("dfe", "abcdefgh"));   // 8������ 354   10������ 236

	return (0);
}

*/