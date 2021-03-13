/*
#include <unistd.h>

void	ft_putchar(unsigned char s)
{
	write(1, &s, 1);
}

void	hex(unsigned char c)
{
	char	hex1[2];						// \0a같은식으로 표시해야하므로 문자가 2개가 필요함.   
	int		i;

	i = -1;
	hex1[0] = c / 16;						// 몫          ex )   10진수 100은   16진수로 64이다.   hex1[0] = 6;
	hex1[1] = c % 16;						// 나머지		hex[0] = 4; 가 들어간 상태다.
	while (++i < 2)						//반복문으로 10이상의수와 이하의수 계산을 돌림.
	{
		if (hex1[i] > 9)				//10이상이면 a~f로 표현해야하므로 조건을 넣음.
		{	
			ft_putchar((hex1[i] - 10) + 'a');		// a~f는 97부터시작.    그리고 10이상이므로 10을 뺴야함.   예를들어 13이면  13 - 10 = 3  + 'a'가 되는것임. 그래서 'd'가 나옴.
		}
		else
			ft_putchar(hex1[i] + '0');		// a~f를 안넣는 9이하의 경우에는 '0'만 넣어서 숫자로 출력.
	}
}

void	ft_putstr_non_printable(char* str)		// 출력불가능한 문자가 있으면 \넣고 16진수로 표현하면됨. 
{
	char* charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)	//출력불가능한 문자일때 들어가는 이프문.
		{
			ft_putchar('\\');					//일단 백슬래쉬 출력.
			hex(*charptr);						// 16진수로 바꿔서 출력해줄 hex함수 호출
		}
		else
			ft_putchar(*charptr);			//출력불가능한 문자가아니면 그냥 출력.
		charptr++;
	}
}
*/
