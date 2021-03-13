/*
#include <stdio.h>
char* ft_strncat(char* dest, char* src, unsigned int nb)
{
	unsigned int i = 0;
	char* d_ptr = dest;
	
	while (*d_ptr != 0)
	{
		d_ptr++;
	}

	while (i < nb && *src != 0)    
	{
		*d_ptr = *src;
		d_ptr++;
		src++;
		i++;
	}
		*d_ptr = 0;   // 마지막에 왜 널을 넣냐면, src = ab  / n = 10이다. 그러면 src[2]인자는 null이니 반복문 종료됬을거고 dest는 ab는 들어갔지만
					// 문장 끝에 null은 없는 상황이다. 그렇기에 null을 넣어주는것이다.
					//반대로 src = abdcefg / nb = 1이다  그러면 dest에는 a만 들어갔지 null은 없으니 널을 넣어주는것이다.
					// src = a / nb = 1  일때도 dest에 a는 들어갔지 null은 안들어갔으니 null은 넣는것이다
					// strcat , strncat 둘다 똑같다. 그냥 마지막에 null을 넣어줬을뿐이다.

	return dest;
}

int main()
{
	unsigned int nb = 10;
	char dest[100] = "hi";
	char src[20] = " hello!";
	
	printf("%s \n", ft_strncat(dest, src, nb));
	return 0;
}

*/