/*
#include <stdio.h>
#include <io.h>
void ft_putstr(char* str)
{
	int i = 0;
	
	while (*str)            // str의 주소값을 증가시킴.
	{	
		_write(1, str, 1);  // 1바이트만 받으므로 Hellowrld중에 w를 출력한다면 str이 반복을돌아, wrld만 가르키는 상태에서 첫번째인덱스인 w가 출력됨
		str++;
	}
	
	while (str[i++]);
	_write(1, str, i);   // write로 str의 값만큼만 출력함.

	

}

int main()
{
	char str[100] = "hello World!";
	ft_putstr(str);
	return 0;
}

*/