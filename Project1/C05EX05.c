/*
#include <stdio.h>
int ft_sqrt(int nb)  //0의 제곱근은 0인것같음. 그리고 음수제곱근은 안구함. 음수의 제곱근은 허수로 나온다함. 근데 허수랑 무리수는 다름. 어쩄든 음수안구함
{
	int i = 1; 

	if (nb <= 0)
		return 0;

	while ( i * i < nb)  //몇번돌려야대는지 정해야함. i * i로 해서 nb보다 같거나작을때 까지만 돌리면 되는건데 그걸 못했음. 일케하면됨.
						// while돌리며 if로 nb % i ==0 && i * i == nb 이런거 할 필요가 없었던것임.
		i++;

	if (i * i == nb)  // i를 nb와 같거나 작을때 까지 돌렸으니까. 지금 i*i가 같으면 제곱근인 것이고 아니면 무리수인것임.
		return i;
	return 0;
}

int main()
{
	int nb = 21025;
	printf("%d\n", ft_sqrt(nb));
	return 0;
}
*/