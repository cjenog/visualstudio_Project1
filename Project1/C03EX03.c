/*
#include <stdio.h>
char* ft_strncat(char* dest, char* src, unsigned int nb)
{
	unsigned int i = 0;
	char* d_ptr = dest;
	
	while (*d_ptr != 0)
	{
		d_ptr++;
	}

	while (i < nb && *src != 0)    
	{
		*d_ptr = *src;
		d_ptr++;
		src++;
		i++;
	}
		*d_ptr = 0;   // �������� �� ���� �ֳĸ�, src = ab  / n = 10�̴�. �׷��� src[2]���ڴ� null�̴� �ݺ��� ��������Ű� dest�� ab�� ������
					// ���� ���� null�� ���� ��Ȳ�̴�. �׷��⿡ null�� �־��ִ°��̴�.
					//�ݴ�� src = abdcefg / nb = 1�̴�  �׷��� dest���� a�� ���� null�� ������ ���� �־��ִ°��̴�.
					// src = a / nb = 1  �϶��� dest�� a�� ���� null�� �ȵ����� null�� �ִ°��̴�
					// strcat , strncat �Ѵ� �Ȱ���. �׳� �������� null�� �־��������̴�.

	return dest;
}

int main()
{
	unsigned int nb = 10;
	char dest[100] = "hi";
	char src[20] = " hello!";
	
	printf("%s \n", ft_strncat(dest, src, nb));
	return 0;
}

*/