/*
#include <stdio.h>
//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	int		negative_char;			//음수입력됬을때 오버플로우대비용 변수
	char	hex_n1;
	char	hex_n2;

	if (c < 0)
	{
		negative_char = (-128 - (c)) * -1 + 128;	// -10이 입력되면 10으로 나오게해줌
		hex_n1 = negative_char / 16;
		hex_n2 = negative_char % 16;
	}
	else
	{
		hex_n1 = c / 16;	//몫
		hex_n2 = c % 16;	//나머지
	}
	if (hex_n1 < 10)				//몫의 알파벳혹은 숫자출력 정하는 조건문
		ft_putchar(hex_n1 + '0');
	else
		ft_putchar(hex_n1 + 87);
	if (hex_n2 < 10)			//나머지의 알파벳혹은 숫자출력 정하는 조건문
		ft_putchar(hex_n2 + '0');
	else
		ft_putchar(hex_n2 + 87);
}

void	ft_putaddr(void* addr)
{
	char	addr_c[15];		//실제문제 지문과 다르게 15자리로 값이 입력되서 15개선언함.
	long	addr_l;			//문자열포인터의 주소를 가지고 오기위해 정수형 변수선언 15개짜리기때문에 10개까지표현되는 int말고 long을 씀 (리눅스환경이라 쓰는거임)
							//윈도우는 long이 int처럼 4바이트임  , 리눅스랑 맥os는 x86-64비트일경우 8바이트임
	int		i;

	addr_l = (long)addr;   // void포인터변수기때문에 같은 포인터 자료형이면 강제형변환 필요없음 하지만 일반 자료형이라 강제형변환필요(gcc에서만 비주얼은 경고만띄움)
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16;  //나머지를 10이상이면 알파벳 아니면 숫자로 [0]번배열부터 차례로 입력
		if (addr_c[i] < 10)
			addr_c[i] += '0';
		else
			addr_c[i] += 87;
		addr_l = addr_l / 16;
		i++;					
	}
	while (i < 15)			//만약에 주소값이 0000333처럼 작다면 앞을 0으로 채우기 위해  비교값 넣고 0으로 채움.
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0)       // 입력을 반대로 했으니 출력을 정상으로 하기위해 큰배열부터 작은배열순으로 출력
		ft_putchar(addr_c[i]);
}

void	ft_print_line(void* addr, int size)
{
	int		i;
	int		sp_to_print;
	char* addr_c;

	addr_c = (char*)addr;	//강제형변환 안해줘도 상관없음. 같은 포인터자료형이기떄문에 근데 그냥 넣음. 가독성좋게. 덜 헷갈리게
	i = 0;
	while (i < size)
	{
		ft_print_hexa(addr_c[i++]);   //16진수로 출력하기위해 16진수출력함수 호출 하면서 i값증가
		if (i % 2 == 0)				  // i가 2의배수이면 ' '을 출력    4235 4236 같이 두글자씩 16진수로 표현하므로 2의배수로 띄운것.	
			ft_putchar(' ');
	}
	sp_to_print = ((16 - size) * 2) + (19 - size) / 2;  // 맨마지막줄에 사이즈가 안맞아 3번째컬럼인 문자열의 정렬이 안맞으니, 그만큼 띄어쓰기 위해서 사용하는 함수임
														// 일단 3칸 2칸식으로 증가하게 짜야함. 왜3칸이냐면 ' '을 표현하기위해서 그리고 3칸이 먼저들어가는 이유는
														// 짝수번은 2칸,3칸 OR 3칸,2칸 상관없지만 홀수번 15사이즈에서는 2칸만하면 ' '를 못넣음. 그래서 3칸먼저함.
														// 기본적으로 2는 무조건 더하게 하고 +1을 여부만 결정할 수 있게 계산을 짜면 쉬워짐.
														// (17 - 15) / 2 = 1 / 14도 1, 13은 2 12도 2 이런식이니까 저렇게 짠거임
														// 2번의 상황마다 1이 더해지니 나누기2로 2번마다 1을 더하게 만든것. 그리고 처음에 1을 더해야하므로
														// 16이 아닌 17로 시작한것임. 16으로 시작했으면 14사이즈일때 1이 더해지는 2,3구조가 됨.


	while (--sp_to_print > 0)	// 사이즈 16이면 1이들어가는데 --되서 0으로처리됨. 
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
}

void* ft_print_memory(void* addr, unsigned int size)
{
	unsigned int	char_to_print;   // 출력할 자리수이자, 잘라먹을 자리수 단위
	unsigned int	offset;			// 시작할 자리수  3이 들어가면 4번째자리에서 시작함.

	offset = 0;					// 맨처음이니 0으로 시작
	while (size > 0)
	{
		if (size >= 16)		  // size가 16개사용할만큼 충분한지 확인하는작업
		{
			char_to_print = 16;
			size -= 16;
		}
		else				// 그렇지 않다면 남은 갯수만큼한 print에 넣음
		{
			char_to_print = size;
			size = 0;
		}
		ft_putaddr(addr + offset);  // 일단 문자열배열의 주소값을 출력하기 위한 함수를 호출. offset을 넣음으로써 가르키는 주소를 바꿔 언제부터출력할지 정할수있음.
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(addr + offset, char_to_print);  // 문자열에 들어간 글자를 16진수로 출력하고 문자를 16개씩 출력할 함수
		ft_putchar('\n'); 
		offset += 16;  // 한번출력할때마다 16글자씩 사용하니, 주소값이동을 위해 오프셋 16증가.
	}
	return (addr);
}



int main(void)
{
	void* v1;
	char ch1[20] = "helloworld!";
	int *i1;
	//int i2;
	v1 = ch1;
	i1 = v1;
	//i2 = v1;
	printf("hi\n");
	return 0;
}
*/