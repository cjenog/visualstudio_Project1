/*
unsigned int ft_strlcat(char* dest, char* src, unsigned int size)  //strcat��strncat�� dest �迭ũ�Ⱑ �۾Ƽ� �ٿ��ֱⰡ ����� ���� �ʴ� ��Ȳ�� ���� ����ó���� ���ξ��ߴ�
{																   //������ ���⼭�� �װ� ���ش�. size > dest + null���� Ŀ���Ѵ�. 
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