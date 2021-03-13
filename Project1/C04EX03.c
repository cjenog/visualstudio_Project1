/*
#include <stdio.h>
void ft_putchar(char c);

int ft_atoi(char* str)
{
	int i = 0;
	int sum = 0;
	int sign = 1;
	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))  // 공백문자가 총 6개임 32(공백) \n(개행),\f(폼피드 새페이지)\t(수평탭 ht),\v(수직탭vt),\r(캐리지리턴 줄의처음위치)
	{
		i++;
	}

	while (str[i] == '-' || str[i] == '+')   //맨처음에는 공백만 나올수있고 그담엔 부호만 나올수있으니 계속 i증가하며 검사
	{
		if (str[i] == '-')  // 마이너스 홀짝에따라 부호가 결정되니 -1씩 sign에 곱함.
			sign *= -1;
		i++;
	}
	//while (str[i] && str[i] >= '0' && str[i] <= '9')  // str[i]를 넣을필요없음. 왜냐하면 어차피 null이 들어가면 '0' ~ '9'사이가 아니니 통과못하니까
	while (str[i] >= '0' && str[i] <= '9') // 0~9를 지정하지않으면, 1234566bb13에서 완전이상한값이 나옴 bb의 ascii값도 같이 계산되서나옴 //str[i] ==0도 필요없음. 숫자가아니니까 자동으로 처리됨.
	{
		sum *= 10;
		sum = sum + (str[i] - '0');   // sum += str[i] -'0'해도 똑같음.  12는  (1*10) + 2 니까 그걸 식으로 나타낸것.
		i++;
	}
	return sum * sign;  // 부호비트를 곱해서 리턴함.
}

int main()
{
	char str[100] = "  --+   --21474a123";
	printf("%d\n",ft_atoi(str));

	return 0;
}
*/