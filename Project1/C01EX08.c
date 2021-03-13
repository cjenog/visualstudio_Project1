/*
#include <stdio.h>   

int main(void)   // 2차원 배열을 쓰는 근본적인 이유가 뭐냐?  ex) 54321이다 							
4 3 2 1 (5)
3 2 1 (4  5)
2 1 (3 4 5)
1 (2 3 4 5)   이렇게 2차원 배열 형식으로 값을 옮길때마다를 표시할 수 있으니까 2차원배열인거다 그리고 괄호친 만큼씩 날릴 수 있으니까 size - i하는것이고 
			  4번 돌리면 되니, i  = 1  ;   i < size(5)로 하는것이다.
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
	
	while (i < size)          // 1,2가 들어있는 배열이면 반복을 몇번 돌리면 정렬가능할까? 1번이겠지? 고로, 사이즈 - 1 만큼만 반복돌리면된다. 여기서는 10개니까 9번
	{
		j = 0;
		while (j < (size - i))   // 버블정렬은 j값 과 J +1값을 비교하므로 size -1을해야 값의 범위를 안넘어감. 근데 -1대신 - i를해서 마지막꺼는 어차피 젤높으니 비교안하게 하는거임
		{
			if (arr[j] > arr[j + 1])    // j와 j +1을 비교,    1 2 3 4 5 라면  1과 2를 비교 조건문에 맞으면 교체, 아니면 j증가, 이번엔 2와 3을 비교 맞으면 교체 아니면 증가
			{							//이걸 4,5까지 비교하면서 넘어감. 그러면 5에는 제일 큰값이 들어가겠지? 그렇다면 5는 제외시켜도됨. 만약에 내림차순으로 하고 싶으면
										// arr[j] < arr[j+1)로하면됨.
			
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
