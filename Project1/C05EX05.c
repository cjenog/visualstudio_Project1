/*
#include <stdio.h>
int ft_sqrt(int nb)  //0�� �������� 0�ΰͰ���. �׸��� ������������ �ȱ���. ������ �������� ����� ���´���. �ٵ� ����� �������� �ٸ�. ��� �����ȱ���
{
	int i = 1; 

	if (nb <= 0)
		return 0;

	while ( i * i < nb)  //��������ߴ���� ���ؾ���. i * i�� �ؼ� nb���� ���ų������� ������ ������ �Ǵ°ǵ� �װ� ������. �����ϸ��.
						// while������ if�� nb % i ==0 && i * i == nb �̷��� �� �ʿ䰡 ����������.
		i++;

	if (i * i == nb)  // i�� nb�� ���ų� ������ ���� �������ϱ�. ���� i*i�� ������ �������� ���̰� �ƴϸ� �������ΰ���.
		return i;
	return 0;
}

int main()
{
	int nb = 21025;
	printf("%d\n", ft_sqrt(nb));
	return 0;
}
*/