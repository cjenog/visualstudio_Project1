/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_len(char* arr)	// 사이즈 재줌.
{
	int i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int ft_white_space_check(char c) 	// 화이트스페이스를 여기서 처리 안하면 코드 25줄 넘어서 여기서 처리
{
	return (c == ' ' || (c >= 9 && c <= 13));	// 만약에 화이트스페이스값이라면 1을 리턴해줌.
}


int	ft_base_exception(char* base) // 기수들의 예외처리확인하는 함수
{
	int i;

	if (base[0] == 0 || base[1] == 1)
		return (1);
	while (*base != 0)
	{
		if (*base == '+' || *base == '-')
			return (1);
		if (*base == ' ' || (*base >= 9 && *base <= 13))
			return (1);
		i = 1;
		while (base[i] != 0)
		{
			if (*base == base[i])
				return (1);
			i++;
		}
		base++;
	}
	return (0);
}




long ft_check_nbr(char* nbr, char* base_from, int base_len) // nbr을 인트형이내의 값으로 바꿔줌. base_from을 기준으로 nbr을 10진수로바꾼다음에 int에 넣어 오버플로우나 언더플로우 처리도해줌)
{
	int i;
	int sum;   // long?
	int sign;

	sign = 1;
	sum = 0;
	while (ft_white_space_check(*nbr))  // nbr에 들어 있는 화이트스페이스가 있다면 주소값을 증가
		nbr++;
	while (*nbr == '-' || *nbr == '+') // nbr에 +-부호가 있다면 그값으로 sign의 값을 변경하며 주소값을 증가.
		if (*(nbr++) == '-')
			sign *= -1;
	while (*nbr) // nbr의 값이 null이 될때까지. nbr의 값을 체크하며 sum에 인트형으로 10진수화 시켜 저장하는 반복문
	{
		i = -1;
		while (base_from[++i])  // base_from을 돌리면서 nbr에 base_from에 맞는 인덱스를 sum계산하는곳에 넘겨줌.
		{
			if (*nbr == base_from[i]) // 해당인덱스를 찾았으면 반복문을 계속 돌리면 안되므로 break로 빠져나오고 i 값이 해당 인덱스이므로 sum의 계산에 사용
				break;
		}
		if (i == base_len)  // i의 값이 base_len 즉 base_from의 null값까지 돌았다면 아래와 같은 이유로 빠져나와야하므로 그값일때 break;
			break;  // atoi가 -+--1234abc123이면 -1234가 출력된다. 시험에서도 0~9while 안돌려서 실수한 부분이다. 123-123으로 찾은 그부분 잊지말기. 
		sum = sum * base_len + (i * sign);  // 2진수를 10진수로 바꿀때 해당 자리수마다 2의 제곱수를 하는것과 똑같은 과정이라고 보면됨.
		nbr++;
	}
	return ((long)sum);  // nbr값을 리턴해줌.
}

int		nbr_size(long nbr, int base_len)
{
	int ret;

	if (!nbr)
		return (1);
	ret = 0;
	if (nbr < 0)
		++ret;
	while (nbr)
	{
		nbr /= base_len;
		++ret;
	}
	return (ret);
}

char	*ft_change(long lnbr, int base_len, char* base) // 넘겨받은 long형 nbr을 이제 base_to기준으로 생김새를 변환해주는 함수.재귀적으로 구성되있음.
{
	char* ret;
	int size;
	long tmp;
	if (lnbr == 0)
	{
		ret = (char*)malloc(2);
		ret[0] = base[0];
		ret[1] = 0;
		return (ret);
	}
	tmp = lnbr;
	size = nbr_size(tmp, base_len);
	ret = (char*)malloc(size + 1);
	ret[size] = 0;
	if (tmp < 0)
		tmp *= -1;
	while (tmp)
	{
		ret[--size] = base[tmp % base_len];
		tmp /= base_len;
	}
	if (lnbr < 0)
		ret[0] = '-';
	return (ret);

}





//void ft_convert_base(char* nbr, char* base_from, char* base_to)
char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	int base_from_len;
	int base_to_len;
	long lnbr;
	//char* mall1;	// 형태를 malloc으로 넘겨줘야해서 멜록함수를 선언.

	base_from_len = ft_len(base_from);
	base_to_len = ft_len(base_to);
	if (ft_base_exception(base_from) || ft_base_exception(base_to))   // exception에서 문제가 있을경우에 1 없으면 0 리턴하므로 if문 들어왔다는건 문제있다는얘기임.
	{

	}


	if ((lnbr = ft_check_nbr(nbr, base_from, base_from_len)) < 0) // ft_check로 나온 10진수형 값이 음수라면 -를출력하고 양수로 바꿔줌.
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	//printf("lnbr : %ld \n", lnbr);
	return (ft_change(lnbr, base_to_len, base_to));  // 10진수를 base_to기준으로 기수화시켜줌.  
	//return nbr;

	//현재 멜록으로 값을 저장하는 과정만 처리 하면 다 끝남. 그리고 base_exception일때, null값을 리턴하는 부분만 하면됨.
}









int main()
{
	char nbr[100] = "++---cba";
	char base_from[100] = "abc";
	char base_to[100] = "abcd";
	char *test1 = ft_convert_base(nbr, base_from, base_to);
	//int re = ft_check_nbr(nbr, base_from, 3);
	//printf("%d\n", re);
	return 0;
}
*/