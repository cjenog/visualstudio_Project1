/*
#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	else if (index == 0)
		return 0;
	else if (index == 1)
		return 1;

	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}


int	fib(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);	
	return (fib(n - 1, b, a + b));  // 쉽게생각해서    한칸씩 자리옮김하는것임.  0 1을 보면 1을 구할 수 있다. 즉, a = b  ,  b = a+b로 한자리씩옮길수있음.
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib(index, 0, 1));
}


int main()
{
	int index = 0;

	//printf("0 : %d\n", ft_fibonacci(0));
	//printf("1 : %d\n", ft_fibonacci(1));
	//printf("2 : %d\n", ft_fibonacci(2));
	printf("3 : %d\n", ft_fibonacci(3));
	//printf("4 : %d\n", ft_fibonacci(4));
	//printf("5 : %d\n", ft_fibonacci(5));
	//printf("6 : %d\n", ft_fibonacci(6));
	//printf("7 : %d\n", ft_fibonacci(7));

	return 0;
}

*/