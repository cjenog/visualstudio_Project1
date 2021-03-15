/*
#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int** range, int min, int max)
{
	int i;
	int* temp;

	if (min >= max)
		return (0);

	*range = (int*)malloc(sizeof(int) * max - min);
	i = 0;
	if (!(*range))
		return (-1);
	//temp = *range;
	while (min < max)
	{
		//temp[i] = min;
		//temp[i] = min;
		range[0][i] = min;
		min++;
		i++;
		//temp++;
	}
	return (i);
}

int main()
{
	int* range;
	int taille;

	taille = ft_ultimate_range(&range, -27, 5);
	printf("Taille = %d\n", taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* ptr1;

	ptr1 = malloc(sizeof(int) * 4);
	ptr1[0] = 10;
	ptr1[1] = 20;
	ptr1[2] = 50;
	ptr1[3] = 100;
	int** ptr2 = &ptr1;

	printf("%d", ptr2[0]);

	return 0;
}


#include <stdio.h>

int main()
{
	char* ptr1 = "hi";
	char* ptr2 = ptr1;

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
}

*/