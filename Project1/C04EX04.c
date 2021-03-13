#include <io.h>
#include <stdio.h>
/*
void ft_putchar(char c);

				// 10진법을 다른진법으로 구하는법.   ft_putnbr이랑 똑같음. 문자형배열을 int로 출력하는놈말하는거임. 지금 이것도 그거처럼, 문자열 기수를 받아 숫자로 출력하는거고
												// 123을 정수로 바꾸려면 123 / 10 , 12 / 10, 1 (못나눔) 을해서 10으로 안나눠질때까지 나눈후, 그 값들의 나머지를 적어줬음.
												// 1 % 10 = 1 , 12 % 10 = 2 , 120 % 10 = 0    -> 다 합하면 120이 나옴.
												// 그렇다면 8진법은? 독같음. 123 / 8 , 15 / 8 , 1 (못나눔) 8로 안나눠질때까지 나눈후 나머지값들을 적어주고 가장마지막숫자를 가장 앞에적어주면됨
												// 1 % 8 = 1, 15 % 8 = 7, 123 % 8 = 3 -> 173이 나옴.
				



int		ft_len(char* ptr)
{
	int i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

int		ft_exception(char* ptr)
{
	int i;
	int j;

	i = 0;
	if (ptr[0] == 0 || ptr[1] == 0)
		return (1);
	while (ptr[i])
	{
		if (ptr[i] == '-' || ptr[i] == '+' || ptr[i] <= 31 || ptr[i] == 127)
			return (1);
		j = i + 1;
		while (ptr[j])
		{
			if (ptr[i] == ptr[j])  	//주소값을 넣고 돌리면 코드가 더 간단해짐. str1의주소값을 증가시키면서 j는 거기에 +1씩 계속더하기만하면됨 만약 ptr주소를 증가시키면서했다면  ptr[0] == ptr[i]도 가능.
									
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char* base)
{
	int		i;
	unsigned int		lnbr;			//언사인드인트써야함.
	unsigned int		len1;		// 베이스의 길이 몇진법인지 확인하기 위해 만듬. 얘도 언사이드 왜냐하면 나누기랑 나머지구하는연산때 컴파일러에 걸림.
	char	str[32];  	// 32로준이유는 인트는 4바이트고 2진수는 32칸을 사용하기때문임. // 널값도 넣어야되서 33을 줘야함.

	len1 = ft_len(base);
	if (ft_exception(base))	// 익셉션의 리턴값이 1이면 바로 함수 종료
		return;
	i = 0;
	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	while (lnbr != 0)
	{
		str[i++] = lnbr % len1;	// 문자열숫자를 정수로 출력하는것이나 다른 기타등등과 앞전에 했던것과  다를바 없음.  그때는 10으로 나눈거고
					// 지금은 10을 포함한 어떤수로든 나누는것임. 형태도 동일하고 결과도 동일함. 
					// 그렇게 str문자열에 거꾸로 값을 집어넣는것임.
		lnbr = lnbr / len1;
	}
	while (--i >= 0)		// 거꾸로 넣은 값을 제대로 출력하는과정임. 그중에 base에 적힌 문자로 기수를 표현할것이니, 
					// str[i]에는 그냥 숫자가들어있고(아스키코드 숫자아님!) 그 숫자값을 사용하여 베이스의 각요소에 접근하는것임
		ft_putchar(base[(int)str[i]]);
}
















//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//

int ft_len(char* ptr)
{
	int i = 0;
	while (ptr[i])
		i++;
	return i;
}

void	ft_putnbr_base(int nbr, char* base)
{
	int base_len = ft_len(base);					//일단 베이스의 길이를 구해서 몇진법인지 확인을 해야함.
	

	if (nbr >= base_len)								// ft_putnbr처럼 재귀함수를 써서 나누고 나머지뽑고 하는식으로 하면됨. 기수법을 쓰므로 출력은 받은 베이스값으로출력함.
	{
		ft_putnbr_base(nbr / base_len, base);
		//ft_putchar(base + (nbr % base_len));
		//_write(1, (base + (nbr % base_len)), 1);
		ft_putchar(base[(nbr % base_len)]);
	}
	else
		//_write(1,( base + (nbr % base_len)),1); // 이렇게 라이트를 쓰던가 아니면 맨아래처럼 base[nbr % base_len] 쓰면됨 
		//ft_putchar((base + (nbr % base_len)));  // 안나오는 이유는 ft_putchar는 char형 변수를 받으니까 !  쓰고싶으면 write로 바로 써야함 write는 cont * char를 받음
		ft_putchar(base[(nbr % base_len)]);

}




int main(void)
{
	ft_putnbr_base(14, "a1b2c3");
	//char base[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%c", base + 1);

	return (0);
}

*/