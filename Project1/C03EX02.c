/*
#include <stdio.h>

char* ft_strcat(char* dest, char* src)
{
	int i = 0;

	while (dest[i] != 0)    // ���࿡ int i�� ����ؼ� �迭�� ����ҿ� ���������ʰ� *dest != 0 ó�� �ҰŶ�� dest�� �ּҰ��� ������ temp�� �ϳ� ����
							// *temp != 0 ���� �α��� ������Ų�� �Ʒ� while���� *temp = *src[j];   ++temp; ++src; ������������ �����ϸ��.
		i++;
	int j = 0;

	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;   // �������� �� ���� �־������.
	return dest;
}



char* ft_strcat(char* dest, char* src)
{
	char* temp = dest;			// temp�� �ּҰ��� �α��� �̵���ų����.
	while (*temp != 0)    
		temp++;				//++�ϴٺ��� ������ �������ö��� �ΰ��� ��ġ����
		

	while (*src != 0)
	{
		*temp = *src;   //temp���� ��ġ���� src�� 0������ �������.
		temp++;       //temp�� ����
		src++;        // src�� ����
	}
	*temp = 0; // �������� ���� �־������.
	return dest;     //temp �� �����ϸ� �ּҰ� ������ ���·� �ѱ�� �ǹǷ� dest�� �Ѱܾ���.
}


int main()
{
	char dest[100] = "hi";
	char src[10] = " woridl!";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}
*/