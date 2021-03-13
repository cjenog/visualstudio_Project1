#include <stdio.h>
#include <io.h>
/*
int	ft_strcmp(char* s1, char* s2)
{
	int i = 0;
	while (s1[i] != 0)    //s1이 널이 될때까지만 돌림. s2가 널이 될때까지 돌려도됨. *s1 && *s2 한사람이 많은데, 굳이 그러지 않아도 결과가 똑같음. 
					      //왜냐하면 리턴에서 마지막값을 비교를 하니까. strcmp함수가 남은전체값에 대해 리턴하는게 아니라 마지막 하나의 값만 비교해서
						  // 그차이만 출력하니까. 이렇게해도 똑같음. 만약에 다른 함수였다면 둘다 널이 될때까지 돌리는게 맞을 것임.
						  // 아니면 둘중에 긴놈을 기준으로 돌리던가.
	{
		if (s1[i] != s2[i])   
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}
	


int main()
{
	char a[30] = "abcde";
	char b[] = "abcd";
	printf("%d \n", ft_strcmp(a, b));
	

	return 0;
}
*/