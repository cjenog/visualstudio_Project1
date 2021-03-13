/*
#include <stdio.h>

int ft_strncmp(char* s1, char* s2, unsigned int n)
{
	while (*s1 && n--)                    //  n-1부터 시작해도됨. 어차피 마지막에 비교하니까. 3개의 주석이 다비슷한거임.i = 0  ;  i <  n-1이런식도충분히가능함.
	{
		if (*s1 != *s2)
			return *s1 - *s2;
		if (n == 0)                        // n==0인데 아래줄에서 s1,이랑 s2의 값이 증가 되므로  0되자마자 리턴해줌. 
			return *s1 - *s2;
		s1++;
		s2++;
	}

	if (i == n)   // 위에 n==0일때 리턴하는거 안쓸꺼면 i=0을 선언해서 i < n으로 while을 돌리고 while이 종료되고 아래코드 실행해도됨.
	{
		--s1;
		--s2;
	}




	return *s1 - *s2;
}


int main()
{
	char s1[100] = "abcd";
	char s2[100] = "abc";

	int n = 3;

	printf("%d \n", ft_strncmp(s1, s2, n));
}

*/