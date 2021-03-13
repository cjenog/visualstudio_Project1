/*
#include <stdio.h>
#include <io.h>

int g_len;
char g_buf[10];

void	rec(int prev, int n)
{
	int i;

	if (n == g_len)
	{
		_write(1, g_buf, g_len);
		_write(1, ", ", 2);
		return;
	}
	if (prev == 9)
		return;
	i = prev;
	while (++i <= 10 - g_len + n)
	{
		g_buf[n] = '0' + i;
		rec(i, n + 1);
	}
}

void	print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		_write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		rec(i++, 1);
	}
	print_last(i);
}

int main()
{
	int n = 3;
	ft_print_combn(3);
	return 0;
}
*/

#include <io.h>
#include <stdio.h>
char	g_seq[11];			// 개행문자도 추가하기위해 11칸선언.
int		g_row[10];			// 행만 확인함. 열은 반복문을 돌리면서 올리기때문에 따로 배열선언안함.
int		g_diag1[19];		// 왼쪽대각선.
int		g_diag2[19];		// 오른쪽대각선.
int		g_cnt;				// 가능한 위치들 총수량을 표기하는 카운트

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;					// 0이나 1이 들어감.
	g_diag1[c - r + 9] = val;	   // c-r+9하면 0,0 1,1이런식으로 대각선으로 증가함.
	g_diag2[r + c] = val;		    //  r + c 하면 마찬가지로 오른쪽대각선으로 증가함.
}

void	rec(int c)					// 재귀함수
{
	int r;

	if (c == 10)				// c == 10이됬다는건 모든값이 0이 아닌것으로 채워졌다는 뜻이므로 출력함.
	{
		_write(1, g_seq, 11);	//개행까지 출력하기에 11글자 출력.
		++g_cnt;				// 한줄을 출력했으므로, 1개 완성한거니까 카운트 1증가.
	}
	r = 0;
	while (r < 10)				// r < 10으로 안하면 모든값을 넣기위해 반복문을 돌린다고함. 왜이렇게 적었지?
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])  // 현재위치, (왼쪽,오른쪽)대각선위치 확인해서 0이들어있으면 이프문들어오고 0이 아닌 값이면 안들어옴
		{
			set_chk_var(r, c, 1);		// 값이 비었으므로 값을 1로 바꿔줘야함. val= 1을 준것이고, r,c는 위치값을 넘긴것. 그리고 set_chk함수에 들어가 실제로 체크해줌. 그위치에
			g_seq[c] = '0' + r;			// 일차원배열에도 위치값을 넣어줌. 02356899 표현되는 그 배열에 넣어주는거.
			rec(c + 1);				   // rec를 재귀를 돌리며 이 if문에서 첫해당값들만 비교를 돌렸으니 1증가된 위치도 비교를 돌림 ex)  0,0(지위치) / 1,0(바로밑위치)  1,1(오른쪽대각선)을 돌림 숫자 증가하면 거기서 더 추가한위치를돌리고
			set_chk_var(r, c, 0);	   // 만약에 r < 10까지 재귀로 계속 돌렸는데 값이 안대면 0으로 계속 리턴해서 다시함.
		}
		++r;
	}
}

void	init(void)			// 0으로 초기화시켜줄 함수.
{
	int i;

	g_seq[10] = '\n';		// 
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)	
{
	init();							//초기화 함수 실행
	rec(0);							// 0번위치부터 시작하니 rec 0인자보내서 호출.
	return (g_cnt);					// 총카운트를 메인으로 리턴
}

int main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}