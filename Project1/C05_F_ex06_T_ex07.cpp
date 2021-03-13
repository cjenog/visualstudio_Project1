#include <stdio.h>
/*
int ft_is_prime(int nb)		// 이 함수의 장점은 간단하다는건데, 문제는 nb숫자가 20억이라면? 반복문을 20억번 돌려야한다. 비효율적인 코드임.
{
	int i = 2;				// 1은 무조건 나눠지므로 1을 제외하기위해 2부터 계산

	if (nb < 2)				// 0과 1은 소수가 아니므로 0을 리턴함.
		return 0;

	while (i * i <= nb)			// nb 보다 1작은 숫자까지 i값을 반복함. nb랑 같은숫자까지 반복하면 7/7은 당연히 나머지가 0이니 if에 걸림.  
							// 반복덜돌리고 싶으면 i * i <= nb하면 되긴한데 정확히 왜인지 수학을 못해서 잘모르겠음
	{
		if (nb % i == 0)   // i값과 nb를 나머지가 0이 나오면 소수가아니므로 0을 리턴 
			return 0;
		i++;
	}
	return 1;				// if문에 한번도 안걸리고 나왔으니 소수이므로 1리턴     
}


int ft_is_prime(int nb)
{
	int i = 2;
	while (nb % i != 0)				// nb가 i로 나눠서 0이나오면 소수가아니니까 반복문 벗어나고 소수면 반복문 계속돌린다는 소리임.
		i++;						// 근데 계속돌리다보면 결국에는 nb와 i가 같아지고 같다면 나눠지므로 반복문 벗어나게됨.
		
	if (nb == i)				// nb와 i가 같다는건 같을때까지 반복을 돌렸는데도 반복문을 못빠져나왔다는 소리이니 소수라는 말임.
		return 1;
	return 0;
}


int ft_is_prime(int nb)		
{
	int i = 2;				

	if (nb < 2)				
		return 0;

	while (i * i <= nb)		
							
	{
		if (nb % i == 0)   
			return 0;
		i++;
	}
	return 1;				
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))				// C05 ex06에서 만든 소수가 맞으면 1을 반환하는 함수 그대로 가져다씀. 1이면 참이므로 nb그대로 리턴해줌.
		return nb;
	return ft_find_next_prime(nb + 1);  //재귀함수를 쓴건데, 내가 해놓고도 이해가 잘안감. 나중에 따로 더 공부하면 가겠지. 일단 대충 넘길것 
										// if가 아니면 재귀를 계속돌다가 결국에 if에서 소수를찾아 nb를 넘겨주면 그값을 계속 내가 불렀던 위에놈한테 리턴해주는 형식임.
}


int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
//	while (!ft_is_prime(i))			// 마찬가지로 썼던거 재활용하는데 만약 소수라면 반복문을 벗어나 그대로 출력하고 아니라면 값을 1씩 증가시키며 반복문을 계속돌림
//		++i;						// 그리고 소수를 찾으면 그걸 그대로 반환하는것임.
	
	while (1)
	{
		if (ft_is_prime(i))		// 위의 코드에서 반복문 내부로 함수를 옮김. 소수라면 브레이크문으로 빠져나옴
			break;
		i++;
	}
			

	return (i);
}



int main()
{
	//int nb = 419;
	int nb = 7;
	//printf("%d\n", ft_is_prime(nb));
	printf("%d\n", ft_find_next_prime(nb));
}
*/