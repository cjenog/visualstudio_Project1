/*
#include <stdio.h>

int ft_strncmp(char* s1, char* s2, unsigned int n)
{
	while (*s1 && n--)                    //  n-1���� �����ص���. ������ �������� ���ϴϱ�. 3���� �ּ��� �ٺ���Ѱ���.i = 0  ;  i <  n-1�̷��ĵ������������.
	{
		if (*s1 != *s2)
			return *s1 - *s2;
		if (n == 0)                        // n==0�ε� �Ʒ��ٿ��� s1,�̶� s2�� ���� ���� �ǹǷ�  0���ڸ��� ��������. 
			return *s1 - *s2;
		s1++;
		s2++;
	}

	if (i == n)   // ���� n==0�϶� �����ϴ°� �Ⱦ����� i=0�� �����ؼ� i < n���� while�� ������ while�� ����ǰ� �Ʒ��ڵ� �����ص���.
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