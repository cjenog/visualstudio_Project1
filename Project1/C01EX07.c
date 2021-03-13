/*
#include <stdio.h>
void ft_rev_int_tab(int* tab, int size)
{
	int i = 0;         //반복문 돌릴 변수
	int j = size / 2;  // 반복횟수  끝자리끼리 바꿀것이므로 size / 2    ex) 12345라면  1과 5 / 2와 4를 바꿔야하므로 2번
	int temp = 0;      // 스왑하기위한 임시저장 변수

	//while (i < --size) //이런코드도 가능.
	while (i < j)  //     5개를 기준으로  0 and 4  /   1 and 3 까지가 끝이고 거기서 더 증가해서 2 and 2가 되면 종료됨. 고로 위와같은코드도가능.
	{
		temp = tab[i];   // 0번값을 temp에넣음
		tab[i] = tab[size - 1];   // 0번에  사이즈 -1 (인덱스는 하나작으니까) 값을넣음.
		tab[size - 1] = temp;  // 사이즈-1에 temp를 넣음
		i++;   // i증가  -> 1번값으로 넘어가야되니까.
		size--;  // 사이즈 감소.   가장마지막에서 그이전번을 사용해야하니까.
	}

}

int main()
{
	int tab[] = {9,8,7,6,5};
	int size = 5;
	ft_rev_int_tab(tab,5);
	int i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}
*/