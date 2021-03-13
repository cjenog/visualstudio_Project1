/*
#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0) //재귀 함수를 벗어나기위한 조건문이자 초기값 0제곱을 받았을때 리턴할 값
		return 1;
	return (nb * ft_recursive_power(nb, power -1));   // nb * power의 -1값을 넘김. 2x2x2x1이니까. 계산순차적으로 해보면 쉬움.
	//파워0은 1을 리턴, 파워 1은  본인 nb * 1인 2 파워 2는 본인 nb값인 2 x 파워1의값 2 인 4  파워 3은 본인 nb값2 * 파워2의값인 4  = 8
}

int main()
{
	int nb = 2;
	int power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	return  0;
}
*/