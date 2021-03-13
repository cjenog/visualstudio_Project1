/*
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return sum;
}

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
}

int ft_iterative_power(int nb, int power)
{
	int sum = 1;   // nb의 0의제곱을 미리 계산해줬다 생각하면된다. ex) 3^2 은 3x3x1이니까. 1부분을 미리 넣은것임.
	if (power < 0) // -2 -3 처럼 음수의 제곱을 표현하지 말라는 말이 없었으므로 nb < 0 조건을 추가로 넣으면 안됨. 팩토리얼은 양수만됬으니 팩토리얼과 상황이 다름.
		return 0;
	//if (nb == 0 || power == 0)  // 어차피 파워가 0 이면 반복문에 들어가지못해 sum의 초기값인 1이 반환될수 박에 없어서 굳이 할 필요 없음.
	//	return 1;				// 그리고 0의 0제곱은 1이지만 , 0의 1제곱부터는 0임. 왜 그런지는 수학적인거라 모르겠다. 그냥 양수의 0제곱은 1로 통일되있나보다. 
								//   그리고 0의 1제곱은 0의0제곱의 값인 1에서 0을 또 곱한것이니 0이 나오는것이고..
								// 만약에 0의 1제곱이상도 다 1로 표시하고 싶으면 if(nb == 0 ) {return 1} 을 추가로 넣어주면 된다.
	while (power > 0)
	{
		sum = sum * nb;
		power--;
	}
	return sum;
}

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;

	return nb * ft_recursive_power(nb, power - 1);
}
int ft_fibonacci(int index)  //피보나치 수열은 n = n-1 + n-2 이다. 고로 n을 구하려면 n이전의 2개의 값이 필요하다. 그래서 0번,1번인덱스값은 초기에 설정하고 넘어간다.
							// for문을 돌릴때도 마찬가지다. 0과1번 인덱스는 미리 설정해야한다. 남은건 그걸 이용해서 반복문과 재귀를 돌리는것이다.
							// 반복문의 경우 n-1 n-2를 더한후 n-1 = n-2  / n-2 = n을 넣는식으로 해도 되고 다른식으로 해도 된다. 
							//재귀는 아래같이 하거나 if(index < 2 ) return index로 해도 된다. 그러면 0,과1이 각자 리턴될것임. 그 0,1로 그다음수들을 구하면됨.
							// 핵심은 0,1번 인덱스의 값을 구하는걸 짜거나 미리 구한후 그 값으로 n-1 + n-2 = n을 만드는것.
{
	if (index < 0)
		return -1;

	else if (index == 0)
		return 0;/
	else if (index == 1)
		return 1;

	if (index < 2)
		return index;
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);   //  n-1 + n-2를 하는것이고 n-1로 재귀로 n-1의 값을 구하고 n-2도 마찬가지로 재귀로 그 값을 구함.
}


int	ft_sqrt(int nb)
{
	long long i = 1;			// 만약 int최대치인 21,4억이 들어가있다면, i * i가 21.4억을 넘을 수도 있으므로 int보다 큰 변수선언. 비주얼에서할꺼면 long long 해야함.
								// 만약 int형으로 i를 선언하고 싶으면 int의 범위안에서 가장큰 제곱근인 46340을 써서   i <=46340 일경우에만 반복문을 돌리고 넘어버리면
								// return 0을 때려버리면됨. 그러면 최대치 갈일이 없음.
	if (nb <= 0)				//만약 -nb값의 제곱근도 구하고 싶으면 nb < 0 일때 nb = -nb하면됨. 대신 int 최소값 2147438648은 0리턴 그외에만 nb = -nb하던가
								// lnb라고 따로 long long형을 만들어서 거기 넣어서 하던가.
		return 0;

	while ((i * i) < nb)	// i의 제곱이 nb랑 같거나 더 클때까지 반복을 돌림 (같다면 i를 출력 더 크다면 제곱근이 아니란소리이므로(nb는제곱근이없다는소리) 0을 출력)
		i++;

	if (i * i == nb)
		return i;
	
	return 0;

}


int main(void)
{
	//int nb = 4294967293; // -2147483648   2147483647  4294967295

	int nb = 3;
	int power = 3;
	printf("i : %d\n", nb);
	printf("power : %d\n", power);

	printf("%d\n", ft_iterative_factorial(nb));
	printf("%d\n", ft_recursive_factorial(nb));
	printf("%d\n", ft_iterative_power(nb, power));
	printf("%d\n", ft_recursive_power(nb, power));

	int index = 5;
	printf("index : %d\n", index);
	printf("%d\n",ft_fibonacci(index));

	unsigned int check = -100;
	//while (check <= 2147483647)
	//{
		int sqrt = ft_sqrt(check);
		printf("%d : %d\n", check, sqrt);
	//	check++;
	//}
	return 0;
}

*/