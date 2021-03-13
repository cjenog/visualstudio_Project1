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
char	g_seq[11];			// ���๮�ڵ� �߰��ϱ����� 11ĭ����.
int		g_row[10];			// �ุ Ȯ����. ���� �ݺ����� �����鼭 �ø��⶧���� ���� �迭�������.
int		g_diag1[19];		// ���ʴ밢��.
int		g_diag2[19];		// �����ʴ밢��.
int		g_cnt;				// ������ ��ġ�� �Ѽ����� ǥ���ϴ� ī��Ʈ

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;					// 0�̳� 1�� ��.
	g_diag1[c - r + 9] = val;	   // c-r+9�ϸ� 0,0 1,1�̷������� �밢������ ������.
	g_diag2[r + c] = val;		    //  r + c �ϸ� ���������� �����ʴ밢������ ������.
}

void	rec(int c)					// ����Լ�
{
	int r;

	if (c == 10)				// c == 10�̉�ٴ°� ��簪�� 0�� �ƴѰ����� ä�����ٴ� ���̹Ƿ� �����.
	{
		_write(1, g_seq, 11);	//������� ����ϱ⿡ 11���� ���.
		++g_cnt;				// ������ ��������Ƿ�, 1�� �ϼ��ѰŴϱ� ī��Ʈ 1����.
	}
	r = 0;
	while (r < 10)				// r < 10���� ���ϸ� ��簪�� �ֱ����� �ݺ����� �����ٰ���. ���̷��� ������?
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])  // ������ġ, (����,������)�밢����ġ Ȯ���ؼ� 0�̵�������� ������������ 0�� �ƴ� ���̸� �ȵ���
		{
			set_chk_var(r, c, 1);		// ���� ������Ƿ� ���� 1�� �ٲ������. val= 1�� �ذ��̰�, r,c�� ��ġ���� �ѱ��. �׸��� set_chk�Լ��� �� ������ üũ����. ����ġ��
			g_seq[c] = '0' + r;			// �������迭���� ��ġ���� �־���. 02356899 ǥ���Ǵ� �� �迭�� �־��ִ°�.
			rec(c + 1);				   // rec�� ��͸� ������ �� if������ ù�ش簪�鸸 �񱳸� �������� 1������ ��ġ�� �񱳸� ���� ex)  0,0(����ġ) / 1,0(�ٷι���ġ)  1,1(�����ʴ밢��)�� ���� ���� �����ϸ� �ű⼭ �� �߰�����ġ��������
			set_chk_var(r, c, 0);	   // ���࿡ r < 10���� ��ͷ� ��� ���ȴµ� ���� �ȴ�� 0���� ��� �����ؼ� �ٽ���.
		}
		++r;
	}
}

void	init(void)			// 0���� �ʱ�ȭ������ �Լ�.
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
	init();							//�ʱ�ȭ �Լ� ����
	rec(0);							// 0����ġ���� �����ϴ� rec 0���ں����� ȣ��.
	return (g_cnt);					// ��ī��Ʈ�� �������� ����
}

int main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}