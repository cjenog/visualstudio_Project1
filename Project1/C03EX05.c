/*
unsigned int ft_strlcat(char* dest, char* src, unsigned int size)  //strcat과strncat은 dest 배열크기가 작아서 붙여넣기가 제대로 되지 않는 상황에 대한 예외처리를 따로안했다
{																   //하지만 여기서는 그걸 해준다. size > dest + null보다 커야한다. 
	int i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	int d_len = i;
	int d_len2 = i;
	int s_len2 = s_len gkatn
	int size2 = size - d_len - 1;
	if (size < (d_len + 1))
		return s_len2 + size;

	i = 0;
	while (i < size2 && src[i])
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len] = 0;

	return dest + s_len2;




}

int main()
{

}
*/