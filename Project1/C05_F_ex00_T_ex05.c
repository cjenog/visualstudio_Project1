/*
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return sum;
}

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
}

int ft_iterative_power(int nb, int power)
{
	int sum = 1;   // nb�� 0�������� �̸� �������� �����ϸ�ȴ�. ex) 3^2 �� 3x3x1�̴ϱ�. 1�κ��� �̸� ��������.
	if (power < 0) // -2 -3 ó�� ������ ������ ǥ������ ����� ���� �������Ƿ� nb < 0 ������ �߰��� ������ �ȵ�. ���丮���� ����������� ���丮��� ��Ȳ�� �ٸ�.
		return 0;
	//if (nb == 0 || power == 0)  // ������ �Ŀ��� 0 �̸� �ݺ����� �������� sum�� �ʱⰪ�� 1�� ��ȯ�ɼ� �ڿ� ��� ���� �� �ʿ� ����.
	//	return 1;				// �׸��� 0�� 0������ 1������ , 0�� 1�������ʹ� 0��. �� �׷����� �������ΰŶ� �𸣰ڴ�. �׳� ����� 0������ 1�� ���ϵ��ֳ�����. 
								//   �׸��� 0�� 1������ 0��0������ ���� 1���� 0�� �� ���Ѱ��̴� 0�� �����°��̰�..
								// ���࿡ 0�� 1�����̻� �� 1�� ǥ���ϰ� ������ if(nb == 0 ) {return 1} �� �߰��� �־��ָ� �ȴ�.
	while (power > 0)
	{
		sum = sum * nb;
		power--;
	}
	return sum;
}

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;

	return nb * ft_recursive_power(nb, power - 1);
}
int ft_fibonacci(int index)  //�Ǻ���ġ ������ n = n-1 + n-2 �̴�. ��� n�� ���Ϸ��� n������ 2���� ���� �ʿ��ϴ�. �׷��� 0��,1���ε������� �ʱ⿡ �����ϰ� �Ѿ��.
							// for���� �������� ����������. 0��1�� �ε����� �̸� �����ؾ��Ѵ�. ������ �װ� �̿��ؼ� �ݺ����� ��͸� �����°��̴�.
							// �ݺ����� ��� n-1 n-2�� ������ n-1 = n-2  / n-2 = n�� �ִ½����� �ص� �ǰ� �ٸ������� �ص� �ȴ�. 
							//��ʹ� �Ʒ����� �ϰų� if(index < 2 ) return index�� �ص� �ȴ�. �׷��� 0,��1�� ���� ���ϵɰ���. �� 0,1�� �״��������� ���ϸ��.
							// �ٽ��� 0,1�� �ε����� ���� ���ϴ°� ¥�ų� �̸� ������ �� ������ n-1 + n-2 = n�� ����°�.
{
	if (index < 0)
		return -1;

	else if (index == 0)
		return 0;/
	else if (index == 1)
		return 1;

	if (index < 2)
		return index;
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);   //  n-1 + n-2�� �ϴ°��̰� n-1�� ��ͷ� n-1�� ���� ���ϰ� n-2�� ���������� ��ͷ� �� ���� ����.
}


int	ft_sqrt(int nb)
{
	long long i = 1;			// ���� int�ִ�ġ�� 21,4���� ���ִٸ�, i * i�� 21.4���� ���� ���� �����Ƿ� int���� ū ��������. ���־󿡼��Ҳ��� long long �ؾ���.
								// ���� int������ i�� �����ϰ� ������ int�� �����ȿ��� ����ū �������� 46340�� �Ἥ   i <=46340 �ϰ�쿡�� �ݺ����� ������ �Ѿ������
								// return 0�� �����������. �׷��� �ִ�ġ ������ ����.
	if (nb <= 0)				//���� -nb���� �����ٵ� ���ϰ� ������ nb < 0 �϶� nb = -nb�ϸ��. ��� int �ּҰ� 2147438648�� 0���� �׿ܿ��� nb = -nb�ϴ���
								// lnb��� ���� long long���� ���� �ű� �־ �ϴ���.
		return 0;

	while ((i * i) < nb)	// i�� ������ nb�� ���ų� �� Ŭ������ �ݺ��� ���� (���ٸ� i�� ��� �� ũ�ٸ� �������� �ƴ϶��Ҹ��̹Ƿ�(nb���������̾��ٴ¼Ҹ�) 0�� ���)
		i++;

	if (i * i == nb)
		return i;
	
	return 0;

}


int main(void)
{
	//int nb = 4294967293; // -2147483648   2147483647  4294967295

	int nb = 3;
	int power = 3;
	printf("i : %d\n", nb);
	printf("power : %d\n", power);

	printf("%d\n", ft_iterative_factorial(nb));
	printf("%d\n", ft_recursive_factorial(nb));
	printf("%d\n", ft_iterative_power(nb, power));
	printf("%d\n", ft_recursive_power(nb, power));

	int index = 5;
	printf("index : %d\n", index);
	printf("%d\n",ft_fibonacci(index));

	unsigned int check = -100;
	//while (check <= 2147483647)
	//{
		int sqrt = ft_sqrt(check);
		printf("%d : %d\n", check, sqrt);
	//	check++;
	//}
	return 0;
}

*/