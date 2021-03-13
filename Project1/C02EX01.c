/*
char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)     // src값이 남았다면 남은 모든 자리를 널로 채워줌.cpy는 붙여넣기가 아닌 덮어쓰기임. abcdefg에   12를 넣으면 12cdefg가 나옴. 꼭 널로 덮어줘야함. 근데 중요한건
					  // 왜 마지막에 dest = null을 따로 한번 더 안넣어주느냐? strncpy는 최대한 src에 맞춰서 널이 안들어가더라도 사이즈에 맞게 값을 넣으려고하기때문임. 
					// 무조건 넣고 싶으면 strlcpy를 쓰면됨.
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
*/