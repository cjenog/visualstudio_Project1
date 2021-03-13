/*
#include <stdio.h>

char* ft_strcat(char* dest, char* src)
{
	int i = 0;

	while (dest[i] != 0)    // 만약에 int i를 사용해서 배열의 각요소에 접근하지않고 *dest != 0 처럼 할거라면 dest의 주소값을 저장할 temp를 하나 만들어서
							// *temp != 0 으로 널까지 증가시킨후 아래 while에서 *temp = *src[j];   ++temp; ++src; 같은형식으로 진행하면됨.
		i++;
	int j = 0;

	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;   // 마지막에 꼭 널을 넣어줘야함.
	return dest;
}



char* ft_strcat(char* dest, char* src)
{
	char* temp = dest;			// temp는 주소값을 널까지 이동시킬것임.
	while (*temp != 0)    
		temp++;				//++하다보니 와일을 빠져나올때는 널값의 위치가됨
		

	while (*src != 0)
	{
		*temp = *src;   //temp널의 위치부터 src의 0번부터 집어넣음.
		temp++;       //temp를 증가
		src++;        // src를 증가
	}
	*temp = 0; // 마지막에 널을 넣어줘야함.
	return dest;     //temp 를 리턴하면 주소가 증가된 상태로 넘기게 되므로 dest를 넘겨야함.
}


int main()
{
	char dest[100] = "hi";
	char src[10] = " woridl!";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}
*/