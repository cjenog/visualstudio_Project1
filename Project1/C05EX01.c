/*
#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)	// 재귀함수를 벗어나기위한 조건문이자, 초기값으로 0이 들어왔을때 0!이 1임을 나타내기위해 사용함.
		return 1;	// nb == 1은 return 1을 굳이 사용안한 이유는 어차피 재귀한번만 돌면 같은 1값이 나오니까.

	return nb * ft_recursive_factorial(nb - 1);
}
int main()
{
	int nb = 1;
	printf("%d\n", ft_recursive_factorial(nb));
	return 0;
}
*/