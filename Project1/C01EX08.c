/*
#include <stdio.h>   

int main(void)   // 2���� �迭�� ���� �ٺ����� ������ ����?  ex) 54321�̴� 							
4 3 2 1 (5)
3 2 1 (4  5)
2 1 (3 4 5)
1 (2 3 4 5)   �̷��� 2���� �迭 �������� ���� �ű涧���ٸ� ǥ���� �� �����ϱ� 2�����迭�ΰŴ� �׸��� ��ȣģ ��ŭ�� ���� �� �����ϱ� size - i�ϴ°��̰� 
			  4�� ������ �Ǵ�, i  = 1  ;   i < size(5)�� �ϴ°��̴�.
{

	int arr[] = { 7,2,8,5,6 };
	//char* hi = "hello world!";
	char hi[10] = "hello!";

	printf("%d \n", sizeof(hi) / sizeof(char));

	int i = 0;
	int size = 5;
	int temp = 0;
	while (i < size)
	{
		int j = i + 1;
		while(j < size)
		{	
			if (arr[i] < arr[j])
			{ 
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}


int main(void)
{

	int arr[] = { 5,4,3,2,1};

	
	int size = 5;
	int temp = 0;
	int i = 1;
	int j = 0;
	
	while (i < size)          // 1,2�� ����ִ� �迭�̸� �ݺ��� ��� ������ ���İ����ұ�? 1���̰���? ���, ������ - 1 ��ŭ�� �ݺ�������ȴ�. ���⼭�� 10���ϱ� 9��
	{
		j = 0;
		while (j < (size - i))   // ���������� j�� �� J +1���� ���ϹǷ� size -1���ؾ� ���� ������ �ȳѾ. �ٵ� -1��� - i���ؼ� ���������� ������ �������� �񱳾��ϰ� �ϴ°���
		{
			if (arr[j] > arr[j + 1])    // j�� j +1�� ��,    1 2 3 4 5 ���  1�� 2�� �� ���ǹ��� ������ ��ü, �ƴϸ� j����, �̹��� 2�� 3�� �� ������ ��ü �ƴϸ� ����
			{							//�̰� 4,5���� ���ϸ鼭 �Ѿ. �׷��� 5���� ���� ū���� ������? �׷��ٸ� 5�� ���ܽ��ѵ���. ���࿡ ������������ �ϰ� ������
										// arr[j] < arr[j+1)���ϸ��.
			
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		int k = 0;
		while (k < size)
		{
			printf("%d ", arr[k]);
			k++;
		}
		printf("\n");
		i++;
	}
	 


	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}
*/
