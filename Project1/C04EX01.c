/*
#include <stdio.h>
#include <io.h>
void ft_putstr(char* str)
{
	int i = 0;
	
	while (*str)            // str�� �ּҰ��� ������Ŵ.
	{	
		_write(1, str, 1);  // 1����Ʈ�� �����Ƿ� Hellowrld�߿� w�� ����Ѵٸ� str�� �ݺ�������, wrld�� ����Ű�� ���¿��� ù��°�ε����� w�� ��µ�
		str++;
	}
	
	while (str[i++]);
	_write(1, str, i);   // write�� str�� ����ŭ�� �����.

	

}

int main()
{
	char str[100] = "hello World!";
	ft_putstr(str);
	return 0;
}

*/