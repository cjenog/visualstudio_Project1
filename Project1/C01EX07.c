/*
#include <stdio.h>
void ft_rev_int_tab(int* tab, int size)
{
	int i = 0;         //�ݺ��� ���� ����
	int j = size / 2;  // �ݺ�Ƚ��  ���ڸ����� �ٲܰ��̹Ƿ� size / 2    ex) 12345���  1�� 5 / 2�� 4�� �ٲ���ϹǷ� 2��
	int temp = 0;      // �����ϱ����� �ӽ����� ����

	//while (i < --size) //�̷��ڵ嵵 ����.
	while (i < j)  //     5���� ��������  0 and 4  /   1 and 3 ������ ���̰� �ű⼭ �� �����ؼ� 2 and 2�� �Ǹ� �����. ��� ���Ͱ����ڵ嵵����.
	{
		temp = tab[i];   // 0������ temp������
		tab[i] = tab[size - 1];   // 0����  ������ -1 (�ε����� �ϳ������ϱ�) ��������.
		tab[size - 1] = temp;  // ������-1�� temp�� ����
		i++;   // i����  -> 1�������� �Ѿ�ߵǴϱ�.
		size--;  // ������ ����.   ���帶�������� ���������� ����ؾ��ϴϱ�.
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