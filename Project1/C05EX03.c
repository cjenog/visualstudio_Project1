/*
#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0) //��� �Լ��� ��������� ���ǹ����� �ʱⰪ 0������ �޾����� ������ ��
		return 1;
	return (nb * ft_recursive_power(nb, power -1));   // nb * power�� -1���� �ѱ�. 2x2x2x1�̴ϱ�. ������������ �غ��� ����.
	//�Ŀ�0�� 1�� ����, �Ŀ� 1��  ���� nb * 1�� 2 �Ŀ� 2�� ���� nb���� 2 x �Ŀ�1�ǰ� 2 �� 4  �Ŀ� 3�� ���� nb��2 * �Ŀ�2�ǰ��� 4  = 8
}

int main()
{
	int nb = 2;
	int power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	return  0;
}
*/